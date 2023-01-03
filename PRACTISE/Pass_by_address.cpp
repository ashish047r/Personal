#include<iostream>
using namespace std;
    
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
    
int main()
{
	int x=10,y=20;
	swap(&x,&y);
	cout<<x<<" "<<y<<endl;
	
	return 0;
	    
}


//can be use when you want to modify the actual para