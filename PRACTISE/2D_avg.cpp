#include <iostream>
using namespace std;
int main() 
{
    int n;
    float num[100],s=0,avg;
    cout<<" enter tne no of element"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the value of"<<i+1<<":";
        cin>>num[i];
        s=s+num[i];

    }
    avg=s/n;
    cout<<"avg is"<<avg;
}


