//Functions: They are born to do a specific task only in their life and when they are called they will do that task only and nothing else.
//We define them outside the main function only for repetitive tasks.
//Syntax:
//<return_type> <function_name>(formal parameters)//input 
//{
//    <C++ code>
//    return  ;
//}
//calling a function:
//<function_name>(actual parameters respectively at the places of formal parameters)
#include<iostream>
using namespace std;

float maths(int SP, int CP) //machine
{
    int profit = SP - CP;
    float percent = profit*100/CP;
    return percent;//output it provides
}

int main()
{
    cout<<"Enter the selling price: "<<endl;
    int x;
    cin>>x;

    cout<<"Enter the cost price"<<endl;
    int y;
    cin>>y;

    cout<<maths(x,y)<<"%"<<endl; //maths(x,y) ---> percent
    return 0;
}
