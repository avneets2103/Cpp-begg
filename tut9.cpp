//To check even and odd number

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number 1: "<<endl;
    int n1;
    cin>>n1;

    cout<<"Enter the number 2: "<<endl;
    int n2;
    cin>>n2;

    int n = n1+n2;

    if (n%2 == 0)
    {
        cout<<"It is even";
    }
    else
    {
        cout<<"It is odd";
    }

    return 0;
}
