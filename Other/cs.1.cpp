#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int N[36]={3,4,5};
	
	if (n>=3)
	{
		for (int i=3;i<n-1;i++)
		N[i]=N[i-1]+N[i-2]+N[i-3];
	}
		
	
	printf("%d\n",N[n-1]); 
	
	return 0;	
} 
