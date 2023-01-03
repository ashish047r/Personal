#include <iostream>
using namespace std;

int main() 
{
    int v,u,a;
    float speed;
    cout<<"enter the vlaue";
    cin>>u>>v>>a;
    speed=(v*v-u*u)/(2*a);
    cout<<"speed is "<<speed<<endl;
    return 0;
} 