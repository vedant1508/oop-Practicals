#include<iostream>
#include<map>
using namespace std;
int main()
{
    typedef map<string,int> maptype;
    maptype populationmap;
    populationmap.insert(pair<string,int>("Maharashtra",651489564));
    populationmap.insert(pair<string,int>("Rajasthan",984562388));
    populationmap.insert(pair<string,int>("Karnataka",46318645));
    populationmap.insert(pair<string,int>("Gujarat",538413548));
    maptype::iterator iter;
    cout<<"Size of Population:"<<populationmap.size()<<endl;
    string state_name;
    cout<<"Enter the name of state:";
    cin>>state_name;
    iter=populationmap.find(state_name);
    if(iter!=populationmap.end())
    {
        cout<<state_name<<"'s Population is "<<iter->second<<endl;
    }
    else{
        cout<<"Key is invalid.";
    }
    return 0;

}
