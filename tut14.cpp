//Printing an array and also accepting values in an array using for loop.
#include<iostream>
using namespace std;
int main()
{                //  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
    int arr[15]; // { , , , , , , , , , ,  ,  ,  ,  ,  }
    cout<<"Enter the elements of array down: "<<endl;
    for (int i = 0; i < 15; i++)
    {
        cin>>arr[i];
    }

    cout<<"The array just formed is: {";
    for (int i = 0; i < 15; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<"}";
    return 0;
}
