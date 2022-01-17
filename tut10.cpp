//Find the largest of all the 3 entered numbers

#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    
    cout<<"Enter number 1"<<endl;
    cin>>x;

    cout<<"Enter number 2"<<endl;
    cin>>y;

    cout<<"Enter number 3"<<endl;
    cin>>z;

    if (x>y)
    {
        if (x>z) //x > y and z
        {
            cout<<x<<" is the lagest"<<endl;
        }
        else //x<z // z>x>y
        {
            cout<<z<<" is the largest"<<endl;
        }
    }
    else //y>x
    {
        if (y>z) //y > x and z
        {
            cout<<y<<" is the largest"<<endl;
        }
        else //z>y>x
        {
            cout<<z<<" is the largest"<<endl;
        }
    }
    

    return 0;
}
