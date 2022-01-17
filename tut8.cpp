//We are making a very basic calculator
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number 1"<<endl;
    int n1;
    cin>>n1;

    cout<<"Enter number 2"<<endl;
    int n2;
    cin>>n2;

    cout<<"What operation do you want:"<<endl<<"1 for addition"<<endl<<"2 for subtarction"<<endl<<"3 for muliplying"<<endl<<"4 for division"<<endl;
    int a;
    cin>>a;

    switch (a)
    {
    case 1:
        cout<<n1+n2;
        break;
    case 2:
        cout<<n1-n2;
        break;
    case 3:
        cout<<n1*n2;
        break;
    case 4:
        cout<<n1/n2;
        break;    
    default:
        cout<<"Invalid entry"<<endl;
        break;
    }
    return 0;
}
