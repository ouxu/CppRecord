#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int n,s,x;
	int i;
	for (n=0;n<=200000;n++)
	{
		s=n;
		i=0;
		
		while (s>0)
			s=s/10,i++;
		
		x=pow(10,i);
		s=(n*n)%x;
		
		if (s==n)
			cout<<n<<" ";
	}
	
	return 0;
}
