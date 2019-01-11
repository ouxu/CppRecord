#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a,x1,x2;
	cin>>a;
	x1=1;
	x2=(x1+a/x1)/2;
	
	while (fabs(x1-x2)>=1e-5)
	{
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	
	printf("%.3f\n",x1);
	return 0;
}
