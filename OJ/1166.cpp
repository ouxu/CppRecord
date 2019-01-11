#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double n,s=0.0;
	long long x;
	for (int i=0;i<64;i++)
	{
		n=pow(2,i)*10000;
		s+=n;
	}
	s=s/10000;
	printf("%.0lf\n",s); 
	
	
	return 0;
}
