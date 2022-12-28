#include<iostream>
using namespace std;
template <class T>

class sorting
{
    public:
    T a[100];
    int i,j,n,temp;
    void Insert_array();
    void Selection_sort();
};
template<class T> void sorting<T>:: Insert_array()
{
    cout<<"Enter the Number of Entries:";
    cin>>n;
    for (i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" Element:";
        cin>>a[i];
        cout<<a[i]<<endl;

    }
}
template<class T> void sorting<T>:: Selection_sort()
{
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Sorted Array by selection Sort "<<endl;
    for (i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    sorting <int> s1;
    s1.Insert_array();
    s1.Selection_sort();
    return 0;
}
