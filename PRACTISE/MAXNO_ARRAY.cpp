#include <iostream>
using namespace std;

int main ()
{
    int A[10]={2,4,6,8,12,3,5,7,9,11};
    int max=INT_MIN;
    for(auto x:A)
    {
        if(x>max)
        {
            max=x;
        }
        cout<<"Maximum no is"<<max<<endl;
    }
}