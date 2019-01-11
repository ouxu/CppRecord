#include <iostream>
using namespace std;
int main()
{
	int i,j,k,t,n;
	for(n=100;n<1000;n++)
	{
		t=n;
		i=t%10;
		t/=10;
		j=t%10;
		t/=10;
		k=t%10;
		if (i*i*i+j*j*j+k*k*k==n)
			cout<<n<<endl;	
	}	
	return 0;
}
