#include <iostream>
using namespace std;

int main()
{
	const double pi=3.1415927;
	double r,v;
	while (cin>>r)
	{
		v=4*pi*r*r*r/3;
		printf("%.3lf\n",v);
		
	}	
	
	return 0;
} 
