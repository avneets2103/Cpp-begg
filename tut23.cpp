//Exception_Handling: Handling a case where we want an exception in our code maybe so tht the code doesnt get hang.
//try--->throw--->catch
#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the numerator"<<endl;
    float num;
    cin>>num;

    cout<<"Enter the denominator"<<endl;
    float den;
    cin>>den;
    
    //exception is: division by zero isnt defined.
    int division;
    try
    {
        if (den == 0)
        {
            throw 8.545;
        }
        int division = num/den; 
    }
    catch(double a)
    {
        cout<<"Exception occurs and denominator";
    }
    

    cout<<"The division gives: "<<division;

    return 0;
}
