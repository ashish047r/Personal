#include <iostream>
using namespace std;
 int main() 
{
    int f;
    cout<<"enter the no of multiplication table";
    cin>>f;
    for (int i = 1;i <=10; i++)
    {
        
        cout<<f<<"x"<<i<<"="<<f*i<<endl;
    }
    return 0;
    
}