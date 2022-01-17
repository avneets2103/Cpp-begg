//Point by value,reference and address
//void: nothing 
#include<iostream>
using namespace std;

void swap_by_value(int x, int y)
{                      // x y z
    int z = x;         // 5 3 5
    x = y;             // 3 3 5
    y = z;             // 3 5 5
}

void swap_by_reference(int &x , int &y) //&//formal parameters k aage "&" lgo do.
{
    int z = x;         
    x = y;             
    y = z;  
}

void swap_by_ptr( int *x, int *y)
{
    
    int z = *x;         
    *x = *y;             
    *y = z;
}

int main()
{
    int a,b;
    cout<<"enter the numbers"<<endl;  
    cin>>a>>b;
    swap_by_ptr(&a,&b);  
    cout<<a;
    cout<<endl<<b;
    return 0;
}


