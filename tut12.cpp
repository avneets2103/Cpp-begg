//Making a fibonnaci series
// 1 3 4 7 11 18 29 .....
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

    cout<<"The respective fibonacci series is: "<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    int z;
    while (n2 <= 10000)
    {
        z = n1+n2;
        cout<<z<<endl;
        n1 = n2;
        n2 = z;
    }

    return 0;
}
