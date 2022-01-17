//Friend function : Who is allowed to have personal data. (defined outside both main function and class)
//Syntax:
//friend <return_type> <fn_name> (parameters){ code }; 

//friend class
//friend and inheritence and multiple friends

#include<iostream>
using namespace std;

class equilateral_triangle
{
    private:
    double a;
    double circumfrence;
    double area;
    public:
    equilateral_triangle(double len)
    {
        a = len;
        circumfrence = 3*len;
        area = (1.73*a*a)/4;    
    }

    //friend void print(equilateral_triangle l);
    friend class homework;
};

class homework
{
    public:
    void print(equilateral_triangle l)                            
    {
    cout<<"Circumference is: "<<l.circumfrence<<endl;
    cout<<"Area is: "<<l.area<<endl;
    }
};


int main()
{
    equilateral_triangle l1(5);
    homework h1;
    h1.print(l1);
    return 0;
}
