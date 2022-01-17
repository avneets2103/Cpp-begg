//Function Overloading: When we use the same function name but have different functions from that single name depeneding on the parameters we add, 
//this is called function overloading.

#include<iostream>
using namespace std;

int sum (int a, int b) //sum ke under 4 categories and each function will be picked depending upon what parameter values we use
{
    return a+b;
}

int sum (int a, int b, int c)
{
    return a+b+c;
}

double sum(int a, double b, int c)
{
    return a+b-c;
}

double sum(double a, double b)
{
    return a+b;
}

int main()
{
    cout<<sum(2,4)<<endl;
    cout<<sum(1,6,9)<<endl;
    cout<<sum(1,4.1,4)<<endl;
    cout<<sum(2.4,3.5);
    
    return 0;
}
