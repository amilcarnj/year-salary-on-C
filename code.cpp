#include <iostream>
using namespace std;

int main ()
{
    float a,b;
    int sum = 0;
    
    cout<<"Enter how much you make per hour :?"<<endl;
    cin>>a;
    cout<<"How many weeks you get pay a year?"<<endl;
    cin>>b;
    
    sum = a*b*40;
    
    cout<<"Your yearly salary is :"<<sum<<endl;
}

