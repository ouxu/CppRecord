#include<iostream>
using namespace std;

int main()
{
	char a,i,k;
	for(i=65;i<=83;i+=2)
	{
		for(k=9-(i-65)/2;k>0;k--)
		{
			cout<<' ';
		}
		for(a=65;a<=i;a++)
			cout<<a;cout<<endl;
	}
	return 0;
}

