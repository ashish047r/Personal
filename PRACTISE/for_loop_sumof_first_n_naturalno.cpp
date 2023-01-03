#include <iostream>
using namespace std;
 int main() 
{
    int n,s=0;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        s=i+s;
        
    }
    cout<<s<<endl;
    return 0;
}