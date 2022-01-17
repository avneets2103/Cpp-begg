//Dynamic Memory allocation: In real time when i change the size of a memory

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the size for making an array:"<<endl;  
    int size;
    cin>>size; //size = 4; 

    int *ptr;//declaring a pointer
    ptr = new int [size];//pointing towards an array //new is used to tell that we are nt pointing to an exsisiting array or variable, we are making new array just for the pointer to point

    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>ptr[i]; 
    }
    
    cout<<"The array just made of size "<<size<<" is "<<endl<<"{";
    for ( int i = 0; i < size-1; i++)
    {
    cout<<ptr[i]<<",";
    }
    cout<<ptr[size-1];
    cout<<"}";
    
    
    return 0;
}

