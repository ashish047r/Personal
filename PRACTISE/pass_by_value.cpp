#include<iostream>
using namespace std;
    
void swap(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	int temp;
	temp=a;
	a=b;
	b=temp;
	    
	cout<<a<<" "<<b<<endl;
}
    
int main()
{    
	int x=10,y=20;
	swap(x,y);
	    
	cout<<x<<" "<<y<<endl;
	
	return 0;
	    
}

//can be used when yu=ou just want to campute and return the result
// in this function actual parameters are not changes just the function parameters are changed 
// usefull in situation where you just want a change in fucntion parameter