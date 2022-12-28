#include<iostream>
using namespace std;
class publication
{
protected:
    string book_name,audio_name;
    float book_price,audio_price;
public:
    void get_book_data()
    {
        cout<<"Enter the Name of book:";
        cin>>book_name;
        cout<<"Enter the Price of Book:";
        cin>>book_price;
    }
    void get_audio_data()
    {
        cout<<"Enter the Name of Audio Book:";
        cin>>audio_name;
        cout<<"Enter the Price of Audio Book";
        cin>>audio_price;
    }
    void display_book()
    {
        cout<<endl;
        cout<<"Book="<<book_name<<endl;
        cout<<"Price="<<book_price<<endl;
    }
    void display_audio()
    {
        cout<<endl;
        cout<<"Audio Book="<<audio_name<<endl;
        cout<<"Price="<<audio_price<<endl;
    }
};
class book : public publication
{
protected:
    int page_count;
public:
    void get_pagecount()
    {
        cout<<"Enter the page Count:";
        cin>>page_count;
    }
    void display_pagecount()
    {
        cout<<"Page Count="<<page_count<<endl;
    }
};
class tape : public publication
{
protected:
    float min;
public:
    void get_min()
    {
        cout<<"Enter the Minutes:";
        cin>>min;
    }
    void display_min()
    {
        cout<<"Minutes="<<min<<endl;
    }
};
int main()
{
    book b1;
    tape t1;
    int choice;
    do
    {
        cout<<"1.Enter the Book Details."<<endl;
        cout<<"2.Enter the Audio Details."<<endl;
        cout<<"3.Display the Book Details."<<endl;
        cout<<"4.Display the Audio Details."<<endl;
        cout<<"5.Exit"<<endl;

        cout<<"Enter your Choice:";
        cin>>choice;

        switch(choice)
        {
        case 1:
            b1.get_book_data();
            b1.get_pagecount();
            break;
        case 2:
            b1.get_audio_data();
            t1.get_min();
            break;
        case 3:
            b1.display_book();
            b1.display_pagecount();
            break;
        case 4:
            b1.display_audio();
            t1.display_min();
            break;
        case 5:
            cout<<"Program Exited Successfully!!";
        }
    }while(choice!=5);
    return 0;
}
