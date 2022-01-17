//operations with arrays
//loops and dimag lgane hai

#include<iostream>
using namespace std;
int main()
{                //  0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
    int arr1[5]; // { , , , , , , , , , ,  ,  ,  ,  ,  }
    cout<<"Enter the elements of array down: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr1[i];
    }

    cout<<"The array just formed is: {";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr1[i]<<",";
    }
    cout<<"}"<<endl;

    int arr2[5]; // { , , , , , , , , , ,  ,  ,  ,  ,  }
    cout<<"Enter the elements of array down: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr2[i];
    }

    cout<<"The array just formed is: {";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<",";
    }
    cout<<"}"<<endl;

    int sum[5];
    for (int i = 0; i < 5; i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    cout<<endl<<"The array just formed by adding the above arrays is: {";
    for (int i = 0; i < 5; i++)
    {
        cout<<sum[i]<<",";
    }
    cout<<"}";
    
    return 0;
}
