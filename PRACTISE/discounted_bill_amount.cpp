#include <iostream>
using namespace std;
int main()
{
    int amt;
    float disamt;
    cout<<"enter the amount";
    cin>>amt;
    if(amt>=5000)
    {
        disamt=amt-amt*20/100;
        cout<<disamt;
    }
    else if(amt>=2000&&amt<5000)
    {
        disamt=amt-amt*10/100;
        cout<<disamt;
    }
    else
    {
        disamt=amt-amt*5/100;
        cout<<disamt;
    }
}