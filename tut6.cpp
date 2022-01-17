//if-else statements:
//It basically checks the condition enteref and the judges what to do.

#include<iostream>
using namespace std;
int main()
{
    cout<<"Tell me yr name:"<<endl;
    string name;
    cin>>name;
    cout<<"Enter your age "<<name<<" : "<<endl;
    int age;
    cin>>age;
    
    if (/* condition */age >= 18 && age < 21)
    {
        cout<<"You can vote but nt marry"<<endl;
    }
    
    //when we have more than 2 cases then we use else if or if we have a condition other than if where a specific range of answers is allowed
    else if (age >= 21 )
    {
        cout<<"You can vote and rishtedar to khte hi honge ki shadi bhi krlo lol";
    }
    
    //when no other condition works then this works 
    else 
    {
        cout<<"Beta bde to hoja"<<endl;
    }

    return 0;
}
