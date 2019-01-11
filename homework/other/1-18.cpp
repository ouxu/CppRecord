#include<iostream>
using namespace std;

int main()
{
	float sum=0,a=1;
	int i,j;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=i;j++)
		{			
			a=a*j;
		}
		sum=sum+a;
		a=1;
	}	
	cout<<sum<<endl;
	return 0;
}

