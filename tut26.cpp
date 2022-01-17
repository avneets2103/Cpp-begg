//Pointer to structure
//variables in a specific structure have no other type but the name of the structure as its type
//<struct_name> *<ptr_name> = &<object_name>;
//for calling a variable we use -> rather tahn . for pointers eg: ptr->a;

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
    friends p1,p2; //Single column or khana of tht shelf
    
    friends *ptr = &p1;

    cout<<"Enter the details"<<endl<<"Enter name"<<endl;
    cin>>ptr->name;//books
    cout<<"Enter age:"<<endl;
    cin>>ptr->age;
    cout<<"Enter your eduaction level rn"<<endl;
    cin>>ptr->education;
    
    cout<<"The deets are:"<<endl; 
    cout<<"Name is "<<ptr->name<<endl<<"Age is "<<ptr->age<<endl<<"They are right now in "<<ptr->education;
 


 
    ptr = &p2;
    
    cout<<"Enter the details"<<endl<<"Enter name"<<endl;
    cin>>ptr->name;//books
    cout<<"Enter age:"<<endl;
    cin>>ptr->age;
    cout<<"Enter your eduaction level rn"<<endl;
    cin>>ptr->education;
    
    cout<<"The deets are:"<<endl; 
    cout<<"Name is "<<ptr->name<<endl<<"Age is "<<ptr->age<<endl<<"They are right now in "<<ptr->education;
    return 0;
}
