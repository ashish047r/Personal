#include<iostream>
using namespace std;
    
void swap(int &a,int &b)
{
	
	int temp;
	temp=a;
	a=b;
	b=temp;
	    
	
}
    
int main()
{    
	int x=10,y=20;
	swap(x,y);
	    
	cout<<x<<" "<<y<<endl;
	
	return 0;
	    
}

//whenever you want the actual para to be modified
//one should write any complex logic inside fn if they are using call by reference