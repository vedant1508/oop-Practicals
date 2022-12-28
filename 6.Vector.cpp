#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class item{
    public:
    char name[10];
    int code;
    int cost;
    int quantity;
    bool operator==(const item &i1){
        if (code==i1.code)
            return 1;
            return 0;
        
    }
    bool operator>(const item &i1){
        if (code>i1.code)
            return 1;
            return 0;
        
    }
};
vector<item>o1;
void print(item &i1);
void display();
void insert();
void search();
bool compare(const item &i1, const item &i2){
    return i1.cost < i2.cost;
}
int main(){
    int ch;
    do{
    cout<<"CHOOSE THE OPTION\n";
    cout<<"1.Insert\n";
    cout<<"2.Display\n";
    cout<<"3.Search\n";
    cout<<"4.Sort\n";
    cout<<"5.Exit\n";
    cout<<"Enter your choice: ";
    cin>>ch;
    switch(ch){
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            sort(o1.begin(),o1.end(),compare);
            cout<<"Sorted Cost:";
            display();
            break;
        case 5:
            exit(0);
    }
    }
    while(ch!=6);
    return 0;
}
void insert(){
    item i1;
    cout<<"Enter the name: ";
    cin>>i1.name;
    cout<<"Enter the code: ";
    cin>>i1.code;
    cout<<"Enter the cost: ";
    cin>>i1.cost;
    cout<<"Enter the quantity: ";
    cin>>i1.quantity;
    o1.push_back(i1);
}
void display(){
    for_each(o1.begin(),o1.end(),print);
}
void print(item &i1){
    cout<<"\nItem Name: "<<i1.name;
    cout<<"\nItem Code: "<<i1.code;
    cout<<"\nItem Cost: "<<i1.cost;
    cout<<"\nItem Quantity: "<<i1.quantity;
    cout<<"\n\n";
}
void search(){
    vector<item>::iterator p;
    item i1;
    cout<<"Enter the item code: ";
    cin>>i1.code;
    p=find(o1.begin(),o1.end(),i1);
    if(p==o1.end()){
    cout<<"Not Found";
    }
    else{
    cout<<"Found";
    cout<<"\n";
    }
}
