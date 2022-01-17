/*
Operators and its types:
C++ already have assigned some operators to do some basic tasks like:
1.Arithmetic Operators: +, -,*,/,++(increase by one),--(decrease by one),%(it gives the remainder).
2.Relational Operators: ==, != (nt equal to),<,>,>=,<=,
3.Logical Operators: &&(and), ||(or)
4.Assignment Operators: =
Others
*/
#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 3;
    int c = ++a;
    int d = --b;
    cout<<"add: "<<a+b<<endl;
    cout<<"divide: "<<a/b<<endl;
    cout<<"successor of a is: "<<c<<endl;
    cout<<"predecessor of b is: "<<d<<endl;

    cout<<bool(a==b)<<endl;
    cout<<bool(a!=b)<<endl;
    cout<<bool(a>=b)<<endl;

    cout<<bool(a==b && a>=b)<<endl;
    cout<<bool(a==b || a>=b)<<endl;
}