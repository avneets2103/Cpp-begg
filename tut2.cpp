//Variables and Datatypes
//Its a value stored by the user in the computer memory.
// int x = 5; <<box in memory and then filled the data>>
// int y; <<im just making the box>>

//datatype of a variable: It tells what type of data can uh store in a variable declared.
//int: integer eg 1, 2, -7 etc.
//float: decimals of small decimal count eg:3.14, 5.789
//double: decimals of large decimal count eg: 3.1738273223423628424623634343436358365376455363836342937293822, 5.7634726423642836736437623 etc.
//char: characters are stored in char eg: a b c .... y z.
//string: for saving a group of character or sentences eg: "My name is avneet".
//bool: eg: bool(if 5>7) = false; it answers only in true or false.

#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    float baba = 2.15;
    double protein = 3.28446382762272;
    char avneet ;
    string gargie;
    bool priyansh;
    avneet = 's';
    gargie = "bchi hai";
    priyansh = false;
    
    //for a coumpter system true = 1 and false = 0;
    //<<endl is used for leaving the line
    //printing data or variables
    
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of baba is: "<<baba<<endl;
    cout<<"Value of protein is: "<<protein<<endl;
    cout<<"Value of avneet is: "<<avneet<<endl;
    cout<<"Value of gargie is: "<<gargie<<endl;
    cout<<"Value of priyansh is: "<<priyansh<<endl;
    
    return 0;

}