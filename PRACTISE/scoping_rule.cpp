#include<iostream>
using namespace std;
    
int x=10;
int main()
{
	int x=20;
	{
		int x=30;
		cout<<x<<endl;
	}
	    
	cout<<x<<endl;
	cout<<::x<<endl;
	    
}
    
    // c++ has block level scope, it will access block by block i.e bracket by bracket