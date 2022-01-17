//default parameters: Ina function you can also give the parameters some by default values if the user dont type any.
#include<iostream>
using namespace std;

int sum(int a, int b, int c, int d = 4)
{
    return a+b+c+d;
}

int main()
{
    cout<<sum(8,3,6);
    return 0;
}
