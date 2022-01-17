//Polymorphism: When we use a same name in different conditions to do different tasks.
//Pointer in class

#include<iostream>
using namespace std;

class Youtube //Base class
{
   private:
   string name;
   int sub_count;
   
   protected://used in inherietnce nt in mainfunction
   string owner;
   string type; 
   int quality;

   public:
   Youtube(string a, string b)//Constructor
   {
       name=a;
       owner=b;
       sub_count = 0;
       quality = 0;
    }
    void print()//public funstions
    {
        cout<<name<<endl<<owner<<endl<<sub_count<<endl<<type<<endl;
    }
    void subscribe()
    {
        sub_count++;
    }
    void unsubscribe()
    {
        if (sub_count > 0)
        {
           sub_count--; 
        }
    }

    void quality_rating()
    {
        if (quality <5)
        {
            cout<<"You must work on yr channel in practsising section "<<owner;
        }
        else
        {
            cout<<"Good going "<<owner;
        }
        
    }
};

class Cooking_channels :public Youtube  //Derievd class
{
    public:
    Cooking_channels(string a,string b):Youtube(a,b) //we are telling that the a and b used in cooking_channel constructor is same as that of Youtube cnstructor
    {
        type = "cooking";
    }
    void practise()
    {
        cout<<"The owner "<<owner<<" is practising new recipies everyday"<<endl;
        quality++;
    }
};

class Singing_channels :public Youtube
{
    public:
    Singing_channels (string a, string b):Youtube(a,b)//Constructor
    {
        type = "music";
    }
    void practise() 
    {
        cout<<"The owner "<<owner<<" is making new songs nd doing rihyaz everyday"<<endl;
        quality++;
    }
};

int main()
{
    Cooking_channels ch1("Amy's kitchen","Amy");
    Singing_channels sh1("John's music","John");
    ch1.practise();
    ch1.practise();
    ch1.practise();
    sh1.practise();
    sh1.practise();
    sh1.practise();
    sh1.practise();
    sh1.practise();
    cout<<endl;
    Cooking_channels *yt1 = &ch1; //Same data type both side
    Youtube *yt2 = &sh1;//sh1 is of data type of singing_channels and yt1 pointer is of data type of youtube,Pointer from base class can point towards derived class
    yt1->quality_rating();//for pointers [.] is changed to [->]
    yt2->quality_rating();
    return 0;
}
