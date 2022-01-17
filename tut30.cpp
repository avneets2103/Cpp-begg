//Inheritence in OOPS: When we inherit data or functions from one base class to the other derived class

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
   
   public:
   Youtube(string a, string b)//Constructor
   {
       name=a;
       owner=b;
       sub_count = 0;
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
    }
};

int main()
{
    Cooking_channels ch1("Amy's kitchen","Amy");
    Cooking_channels ch2("John's Kitchen","John");
    Youtube yt1("ASP","Avneet");
    yt1.subscribe();
    yt1.subscribe();
    yt1.print();
    ch1.subscribe();
    ch1.subscribe();
    ch1.subscribe();
    ch1.print();
    ch1.practise();
    cout<<endl;
    ch2.subscribe();
    ch2.subscribe();
    ch2.unsubscribe();
    ch2.print();
    ch2.practise();
    return 0;
}
