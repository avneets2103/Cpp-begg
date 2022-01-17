//Object Oriented Programming: Specialised programming used to connect well with real life problems, in normal code all the data and variables and functions 
//are publically avaialble, thus OOP provides us a method to make specific ways to access out data, functions and variables.
//"CodeBeauty OOP course"

#include<iostream>
using namespace std;

class Youtube//Bookshelf//class
{
    public://To access attributes outside the class
    string name;//attributes of the class
    string owner;
    int sub_count;
    string type;
};

int main()
{
    Youtube ch1;//object//khana of the book shelf
    ch1.name="Asan Si Padhai";//book
    ch1.owner="Avneet singh";
    ch1.sub_count=150;
    ch1.type="Educational";
    
    cout<<ch1.name<<endl<<ch1.owner<<endl<<ch1.sub_count<<endl<<ch1.type;
    return 0;
}
