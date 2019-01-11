#include <stdio.h>

int a[4][4];

void getdata(int N[16])
{
	for (int i=0;i<16;i++)
	{
		N[i]=rand()
		a[i/4][i%4]=N[i];
	}		
} 

void printfdata(int a[4][4])
{	
	for (int i=0;i<4;i++)		
		printf("%d\t%d\t%d\t%d\n",a[i][0],a[i][1],a[i][2],a[i][3]);
}

void process(int a[4][4])
{
	int c[4],r[4];
	for (int i=0;i<4;i++)	
	{
		c[i]=a[i][0],r[i]=a[0][i];
		for (int j=0;j<4;j++)
		{	
			if (c[i]>a[i][j])
				c[i]=a[i][j]; 
			if (r[i]<a[j][i])
				r[i]=a[j][i];
		}
	}
	
	int n=1;
	for (int i=0;i<4;i++)
	for (int j=0;j<4;j++)
	{
		if (a[i][j]==c[i]&&a[i][j]==r[j])
			printf("第%d个马鞍点,a[%d][%d],%d\n",n,i,j,a[i][j]),
			n++;	
	}
}
 
int main()
{
	int N[16];
	getdata(N);
	printfdata(a);
	process(a);

	
	return 0;
} 
