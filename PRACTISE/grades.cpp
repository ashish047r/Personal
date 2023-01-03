#include <iostream>
using namespace std;
int main()
{
    int a,b,c,t;
    float avg;
    cout<<"enter the marks";
    cin>>a>>b>>c;
    t=a+b+c;
    avg=t/3.0;
    if(avg>=60)
    cout<<"A";
    else if(avg>=35&&avg<60)
    cout<<"B";
    else
    cout<<"C";
}