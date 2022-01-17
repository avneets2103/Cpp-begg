//Arrays: Its a type of data in C++ which can store multiple data of similar type
//M1: Giving values as it is
//M2: Declaring an array first and then later filling values one by one
//M1 Syntax: 
// <type> <name>[<number of elements>n]{e0,e1,e2,e3....e(n-1)}
#include<iostream>
using namespace std;
int main()
{
    char gargie[6]{'g','a','r','g','i','e'};
//                  0   1   2   3   4   5
    cout<<gargie[3]<<endl;
    
    int rno[4]{223,54,87,823};
//              0  1  2   3   
    
    cout<<rno[2]<<endl;

    float baba[5]; //{ , , , , }
                   // 0 1 2 3 4
    
    baba[0]=23.65;
    baba[1]=98.34;
    baba[3]=766.0839;
    baba[4]=23.0978;
    return 0;
}
