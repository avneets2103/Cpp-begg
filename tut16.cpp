//pointers: It refrences or points towards a data knowing it from its address
//int a = 5;
//In the memory there is a specific addrees {lets call it add}, then the pointer is basically known to the address and it calls the value via its address.
//In general when we call a function like cout<<a; then it know the value of a and not the address of a.
//Syntax for a pointer is: 
//<type> <var_name>;
//M1: <type> *<ptr_name> = &<var_name>;
//M2: <type> *<ptr_name>;
//    <ptr_name> = &<var_name>
//*: reference operator [it loactes the address] (accepting the address)
//&: dereference operaator [applied with coomon variables for giving its address] (for providing the address)
#include<iostream>
using namespace std;
int main()
{
    int a = 88748394; //box named a is formed
    int *ptr = &a;    //ptr now is reffering to the box and dont matter what is inside it as value
    cout<<ptr<<endl; 

    int b;
    int *ptr2;
    ptr2 = &b;
    cout<<ptr2;       
    return 0;
}
//0x61ff08 address of a
//0x61ff08 address of a