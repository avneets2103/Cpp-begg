//Virtual function: When used properly using pointers, virtual functions basically give the most derived function from the name.
//Pure Virtual function: It provides a condition that yiu have to include the pure virtual function in the derived classes or it wont work.
//Abstract class: Any class with atleast 1 pure virtual function is called an abstract class.

#include<iostream>
using namespace std;

class instrument
{
    public: 
    virtual void sound(){}//pure virtual_function
};

class piano : public instrument
{
    public: 
    void sound()
    {
        cout<<"Piano playing"<<endl;
    }
};

class guitar : public instrument
{
    public:
    void sound() 
    {
        cout<<"Guitar bjda"<<endl;
    }
};    

int main()
{
    instrument *i1 = new piano(); //new keyword //pointer of base class pointing towards the derived class
    i1->sound();
    instrument *i2 = new guitar(); //new keyword //pointer of base class pointing towards the derived class
    i2->sound();
    return 0;
}
