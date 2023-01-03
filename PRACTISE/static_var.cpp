#include<iostream>
using namespace std;
    
void fun()
{
	static int s=10;
	s++;
	    
	cout<<s<<endl;
}
    
int main()
{
	fun();
	fun();
	    
}

//Static variable are the variables which remains always in the memory, 
//they are just like global variables only the diff btwn global amd static var is 
//global var can be access in any fn staic var are accessible only inside the fn in which they are declared