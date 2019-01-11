#include <iostream>
using namespace std;

int main()
{
	int i,j,k;
	for (i=0;i<=20;i++)
	for (j=0;j<34;j++)
	for (k=0;k<=300;k+=3)
	{
		if ((i*5+j*3+k/3*1==100)&&(i+j+k==100))
			printf("cock=%d,hen=%d,chicken=%d\n",i,j,k);
		
	}
	
	return 0;	
}
