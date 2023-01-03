#include <iostream>
using namespace std;
int main()
{
    int A[10],n=10,key;
    cout<<"enter the no";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the key";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        {
            cout<<"fount at "<<i;
            return 0;
        }
    }
    cout<<"not found";
}