//Inline functions: They are also functions but they save time by copying the whole funcyion data to wherever they are called.
//inline <function_syntax>

#include<iostream>
using namespace std;

inline int sum(int a, int b) //inline function//they are faster
{
    return a+b;
}

int main()
{
    cout<<sum(5,3);
    return 0;
}

