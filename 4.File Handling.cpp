#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream ifile;
    ofstream ofile;

    ofile.open("Oop.txt");
    string str;
    cout<<"Enter the string:";
    cin>>str;
    ofile<<str;
    ofile.close();

    string line;
    ifile.open("Oop.txt");
    ifile>>line;
    ifile.close();
    cout<<line;
    return 0;
}
