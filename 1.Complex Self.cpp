#include<iostream>
using namespace std;
class complex
{   public:

    float real,img;

    complex()
    {
        real=0;
        img=0;
    }
    complex(float a,float b)
    {
        real=a;
        img=b;
    }
    void display()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
complex operator+(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
complex operator*(complex c1,complex c2)
{
    complex temp;
    temp.real=(c1.real*c2.real)-(c1.img*c2.img);
    temp.img=(c1.real*c2.img)+(c1.img*c2.real);
    return temp;
}
ostream& operator<<(ostream& COUT,complex c1)
{
    COUT<<c1.real<<" + "<<c1.img<<"i"<<endl;
}
istream& operator>>(istream& CIN,complex& c)
{
    CIN>>c.real>>c.img;
}

int main()
{
    complex z1;         //Default Constructor
    complex z2(4,5);    //Parameterized Constructor
    z1.display();
    z2.display();

    complex z3=z1+z2;   //Operator+
    z3.display();
    cout<<z3;           //Operator<<
    complex z4;
    cout<<"Enter the Complex Number :";
    cin>>z4;            //Operator>>
    cout<<z4;
    cout<<z3*z4;        //Operator*
}
