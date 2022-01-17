/*
Structures:
Its a very good tool of C++ which lets us store data in a mannered form
Structures are defined outside the main function.

S1. Defining {outside the main func.}
    struct <name>
    {
        int a;
        string b;
        float c;
        //data you want to have in this// 
    }

S2. Making object {Used in the main function}    
    name <object_name>;

S3. Using the struct object
    <object_name>.a ---> The value to be stored in variable a belonging to this object in this structure. 
*/

#include<iostream>
#include<string>
using namespace std;

struct friends   //Book shelf
{
    string name;    //we already define what type of book we want 
    int age;        //0-12,12-18,18-30, +
    string education;
};


int main()
{
    friends p1; //Single column or khana of tht shelf
    
    cout<<"Enter the details"<<endl<<"Enter name"<<endl;
    cin>>p1.name;//books
    cout<<"Enter age:"<<endl;
    cin>>p1.age;
    cout<<"Enter your eduaction level rn"<<endl;
    cin>>p1.education;
    
    cout<<"The deets are:"<<endl; 
    cout<<"Name is "<<p1.name<<endl<<"Age is "<<p1.age<<endl<<"They are right now in "<<p1.education;
    return 0;
}
