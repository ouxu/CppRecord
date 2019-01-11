#include <iostream>
using namespace std;
char c[1000];

int main()
{
	long long int n,i=0;
	cin>>n;
	char z='A';
	
	
	while(n!=0)
	{
		i++;
		c[i]=n%16;
		n=n/16; 
		
		if (c[i]>9)
			c[i]=z+(c[i]-10);	
		else 
			c[i]=c[i]+'0';
	} 
	
	for (int x=i;x>0;x--)
		cout<<c[x];
	
	return 0;
} 
