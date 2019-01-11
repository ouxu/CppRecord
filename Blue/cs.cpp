#include <iostream>

using namespace std;

int main()
{
	int x=10,*p,**pp;
	p=&x;
	pp=&p;
	cout<<x<<"  "<<p<<"  "<<pp<<endl;
	cout<<*p<<"  "<<*pp<<"  "<<**pp<<endl; 
	
	
	return 0;
 } 
