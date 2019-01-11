#include <stdio.h>
#include <cmath.h>

int main()
{
	const double p=atan(1.0)*4;
	int n;
	scanf("%d",&n);
	
	double s=p*n*n/1.0;
	
	printf("%.7lf",s);
	return 0;
}
