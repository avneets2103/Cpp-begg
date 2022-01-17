/*
Loops: So when we code genrally out compiller runs or reads from up to down like humans, but when a loop is applied then the compiller is stuck in the loop 
until the loop is exitted. 

Types:
for:equal judgement for all
while:equal judgement for all
do-while: it runs atleast for the first run and then stops if false.

Condtions: If the conditions are true the compiller enters the loop and repeat it until its false.
*/

#include<iostream>
using namespace std;
int main()
{   
    string b; 
    do//this is repeated for every true in while
    {
       cout<<"Enter your password: "<<endl;
       cin>>b;
    } while (b != "avneet");
    //if loop gets over
    {
       cout<<"Right password"<<endl;  
    };
    return 0;
}
