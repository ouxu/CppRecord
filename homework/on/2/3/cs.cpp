#include <stdio.h>
void print(char c)
{
	if (c-'Z'>0)
		printf("%c",c-26);
	else if (c-'A'<0)
		printf("%c",c+26);
	else 
		printf("%c",c);
}
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	for (int i=0;i<n;i++)
	{ 
		for (int j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for (int j=0;j<i+1;j++)
			print(c+j);
		for (int j=i;j>0;j--)
			print(c+j-1);
		printf("\n");
		c++;
	}
	
	return 0;	
} 
