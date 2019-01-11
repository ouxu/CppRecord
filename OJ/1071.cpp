#include <stdio.h>

#define chu(a,b) a=a%b

int main()
{
	int a,b;
	
	scanf("%d %d",&a,&b);
	chu(a,b);
	printf("%d\n",a);
	
	return 0;
}
