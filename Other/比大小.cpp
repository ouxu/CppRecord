#include <iostream>
using namespace std;
int main()
{
	int a,b,t;
	cin>>a>>b;
	(a>b)?(t=a,a=b,b=t):(a=a);
	cout<<a<<b; 
	
	
	
	
	return 0; 
}
