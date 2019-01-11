#include<iostream>
using namespace std;

int main()
{
	double a=2,b=1,c,sum=0;
	
	for(int i=1;i<=20;i++)
	{
		sum=sum+a/b;
		c=a;
		a=a+b;
		b=c;
	}
	
	cout<<sum;
	return 0;
}
	
