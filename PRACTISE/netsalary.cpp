#include <iostream>
using namespace std;
int main() 
{
    int bs,pa,pd,ns;
    cout<<"enter the base salary";
    cin>>bs;
    cout<<"enter the percentage allowance";
    cin>>pa;
    cout<<"enter the percentage deduction";
    cin>>pd;
    ns=bs+bs*pa/100-bs*pd/100;
    cout<<"salary is "<<ns<<endl;
    return 0;
}