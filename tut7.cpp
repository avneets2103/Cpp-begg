/*
Switch condition: When we want some specific entries
*/

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number for printing a weekday"<<endl;
    int a;
    cin>>a;

    switch (a)//variable around which decesions is to be made
    {
    case 1: //case when value of a is 1
        cout<<"MONDAY";
        break;
    case 2: //case when value of a is 2
        cout<<"TUESDAY";
        break;
    case 3: //case when value of a is 3
        cout<<"WEDNESDAY";
        break;
    case 4: //case when value of a is 4
        cout<<"THURSDAY";
        break;
    case 5://case when value of a is 5
        cout<<"FRIDAY";
        break;
    case 6: //case when value of a is 6
        cout<<"SATURDAY";
        break;
    case 7: //case when value of a is 7
        cout<<"SUNDAY";
        break;                
    default: //case when value of a is nt in the above cases
        cout<<"iNVALID ENTRY";
        break;
    }

    return 0;
}
