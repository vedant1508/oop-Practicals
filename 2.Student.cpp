#include<iostream>
using namespace std;
class student
{
    int mob,roll_no;
    string name,class_div,add,blood_grp;
    static int id;
    public:
    student()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Class and Div:";
        cin>>class_div;
        cout<<"Enter the Contact No:";
        cin>>mob;
        cout<<"Enter the Roll No:";
        cin>>roll_no;
        cout<<"Enter the Address:";
        cin>>add;
        cout<<"Enter the Blood Group:";
        cin>>blood_grp;
    }
    void getid()
    {
        id++;
        cout<<"ID="<<id<<endl;
    }
    inline void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Class and Div="<<name<<endl;
        cout<<"Address="<<name<<endl;
        cout<<"Roll No="<<name<<endl;
        cout<<"Contact No="<<name<<endl;
        cout<<"Blood Group="<<name<<endl;
        //cout<<"ID="<<id<<endl;
    }
    student(student &x)
    {
        this->name=x.name;
        this->class_div=x.class_div;
        this->add=x.add;
        this->id=x.id;
    }
    ~student()
    {
        cout<<"Object is deleted"<<endl;
    }
    friend class stud;
};
class stud
{
    student s;
public:
    stud(int phone,int rn)
    {
        s.mob=phone;
        s.roll_no=rn;
    }
};
int student::id;
int main()
{
    int n;
    cout<<"1.Default\n2.Copy\n3.Dynamic Memory Allocation";
    cin>>n;

    switch(n)
    {
{case 1:
    cout<<"Default Constructor"<<endl;
    student s1;
    s1.display();
    s1.getid();
    break;
    }
    {
    case 2:

    cout<<"Copy Constructor"<<endl;
    student s1;
    student s2(s1);
    s2.display();
    s2.getid();
    break;

    }

{case 3:
    student *st;
    cout<<"Enter number of enteries:";
    cin>>n;
    st=new student[n];
    delete []st;
    break;
    }
    case 4:
        {
            cout<<"Friend Class"<<endl;
            stud p(4561,45);
            //p.display();
        }


}

    return 0;
}
