#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2;
    cout<<"enter valuw of a,b,c";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"area "<<r1<<" "<<r2;
    return 0;
}
