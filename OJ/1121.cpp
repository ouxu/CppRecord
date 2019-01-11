#include <iostream>
using namespace std;

int main()
{
	const int p=3.1415;
	double r,h,v1,v2,V;
	while (cin>>r>>h)
	{
		v1=p*r*r*h;
		v2=16*r*r*r/3;
		V=2*v1-v2;
		printf("%.4lf\n",V); 
		
	}
	
		
	return 0;
} 
