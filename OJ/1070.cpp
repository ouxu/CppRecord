#include <stdio.h>

#define ex(x,y) x=x+y;y=x-y;x=x-y; 

int main()
{
	int x,y;
	
	scanf("%d %d",&x,&y);
	ex(x,y);
	printf("%d %d\n",x,y);
	
	return 0;
}
