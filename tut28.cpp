//Constructors: Its like a function which has to be given the name as of the class

#include<iostream>
using namespace std;

class Youtube//Bookshelf//class
{
    public://To access attributes outside the class
    string name;//attributes of the class
    string owner;
    int sub_count;
    string type;

    Youtube(string a, string b, string c) //Constructor
    {
        name = a;
        owner = b;
        type = c; 
        sub_count = 0;
    }

    void print()
    {
        cout<<name<<endl<<owner<<endl<<sub_count<<endl<<type<<endl<<endl;
    }
};

int main()
{
    Youtube ch1("Asan Si Padhai","Avneet singh","Educational");//object//khana of the book shelf
    ch1.sub_count=150;
    
    Youtube ch2("Guidance Vala", "Avneet singh","Mentoring");

    ch1.print();
    ch2.print();
    
    return 0;
}
