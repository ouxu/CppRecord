#include <stdio.h>

double max1(double a,double b,double c)
{
	double max;
	max=a>b&&b>c?a:(b>c?b:c);
	return max;	
}

#define max2(a,b,c) a>b&&b>c?a:(b>c?b:c)

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	printf("%.3lf\n",max1(a,b,c));
	printf("%.3lf\n",max2(a,b,c));
	return 0;
}
