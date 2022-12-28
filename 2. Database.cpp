#include<iostream>
using namespace std;
class student
{
    int roll_no,mob_no;
    string name,add;
    static int id;
    public:
    student()
    {
        name="Vedant";
        add="Nashik";
        roll_no=49;
        mob_no=124567;
    }
    student(student &s)
    {
        this->name=s.name;
        this->add=s.add;
        this->roll_no=s.roll_no;
        this->mob_no=s.mob_no;
    }
    inline void getdata()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Roll No:";
        cin>>roll_no;
        cout<<"Enter the Mobile No:";
        cin>>mob_no;
        cout<<"Enter the Address:";
        cin>>add;
    }
    inline void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Roll No="<<roll_no<<endl;
        cout<<"Mobile No="<<mob_no<<endl;
        cout<<"Address="<<add<<endl;
    }
    void getid()
    {
        id++;
        cout<<"ID="<<id<<endl;
        cout<<endl;
    }
    ~student()
    {
        cout<<"Destructor is called."<<endl;
    }
    friend class info;
};
class info
{
    student s1;
    //cout<<"Friend Class";
};
int student ::id;
int main()
{   int ch,n;
    cout<<"1.Default Constructor\n2.Copy Constructor\n3.Friend Class\n4.Dynamic Memory Allocation";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            cout<<"Default Constructor"<<endl;
            student s1;
            s1.display();
            s1.getid();
            break;
        }
    case 2:
        {
            cout<<"Copy Constructor"<<endl;
            student s1;
            student s2(s1);
            s2.display();
            s2.getid();
            break;
        }
    case 3:
        {
            cout<<"Friend Class"<<endl;
            student s3;
            s3.getdata();
            s3.display();
            s3.getid();
            break;
        }
    case 4:
        {
            student *st;
            cout<<"Enter the Number of enteries:";
            cin>>n;
            st=new student[n];
            delete []st;
            //st.getdata();
            //st.display();
            //st.getid();
            break;
        }
    }
    return 0;


}
