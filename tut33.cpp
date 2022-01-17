//Abstraction means showing the important info and hiding complex details.
//For user interface to be easy 
#include<iostream>
using namespace std;

class smartphone //abstract class
{    
    public:
    virtual void take_a_selfie() = 0;
};

class android : public smartphone
{
    void take_a_selfie()
    {
        cout<<"Android took a selfie"<<endl;
    }
};

class iphone : public smartphone
{
    void take_a_selfie()
    {
        cout<<"Iphone takes a selfie"<<endl;
    }
};

int main()
{
    smartphone *s1 = new iphone();
    s1->take_a_selfie();
    
    return 0;
}
