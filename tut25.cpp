//Structures using arrays

#include<iostream>
using namespace std;

struct person
{
    string name;
    int age;
    string eduaction;
};

int main()
{
    person p[3];//p[0],p[1],p[2]
    cout<<"Enter the deets"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
       cout<<"Enter name, age and education in order for person"<<i+1<<endl;
       cin>>p[i].name>>p[i].age>>p[i].eduaction; 
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout<<"The details of person"<<i+1<<" are: "<<endl;
        cout<<p[i].name<<endl<<p[i].age<<endl<<p[i].eduaction<<endl;
    }
    return 0;
}
