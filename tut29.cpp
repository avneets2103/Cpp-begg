//Private data type and Manipulating private data, attributes
//Private data isnt directly accessible via basic methods so we use different functions in the public domain of the class to access the data as the
//function lies in the class itself thus all teh attributes let it be private or public are available in the class itself.
#include<iostream>
using namespace std;

class Youtube
{
   private:
   string name;
   string owner;
   int sub_count;
   string type; 
   public:
   Youtube(string a, string b, string c)//Constructor
   {
       name=a;
       owner=b;
       type=c;
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

int main()
{
    Youtube ch1("asan si padhai","avneet","educational");
    Youtube ch2("guidance vala","avneet","mentoring");

    for (int i = 0; i < 100; i++)
    {
        ch1.subscribe();
    }
    for (int i = 0; i < 30; i++)
    {
        ch1.unsubscribe();
    }

    ch1.print();

    for (int i = 0; i < 5; i++)
    {
        ch1.subscribe();
    }
    for (int i = 0; i < 10; i++)
    {
        ch1.unsubscribe();
    }
    ch2.print();

    return 0;
}
