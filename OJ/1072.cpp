#include <stdio.h>
#include <cmath>

#define C(a,b,c) C=(a+b+c)/2
#define s(C,a,b,c) s=sqrt(C*(C-a)*(C-b)*(C-c))

int main()
{
	double a,b,c,C,s;
	scanf("%lf %lf %lf",&a,&b,&c);
	C(a,b,c);
	s(C,a,b,c);
	printf("%.3lf\n",s);
	
	return 0;
}
