#include <iostream>
#include<math.h>
using namespace std;

 int main() 
{
    float a,b,c,d,r1,r2;
    cout<<"enter the values";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        r1=-b/(2*a);
        cout<<"roots are real and equal "<<r1;
    }
    else if(d>0)
    {
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    cout<<"real and unequal"<<r1<<" "<<r2;
    }
    else
    {
    cout<<"imaginary";
    }
}
