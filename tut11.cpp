//finding factorial
// n! = n.n-1.n-2.n-3......1
//eg: 4! = 4.3.2.1
//eg: 7! = 7.6.5.4.3.2.1

#include<iostream>
using namespace std;
int main()
{
    cout<<"Give n to find n!: "<<endl;
    int n;
    cin>>n;

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        a/*assigning a new value*/ = a/*last value of a*/*i;
    }
    cout<<"The value of n! is: "<<a;
    return 0;
}


