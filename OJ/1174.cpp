#include <iostream>
using namespace std;

int main()
{
	int s,c,n=0;
	int i,j;
	s=0;
	for (i=0;i<=4;i++)
	for (j=0;j<=3;j++)
	{
		c=i*3+j*5;
		if (s!=c)
		{
			s=c;
			n++;
		} 
	}
	
	cout<<n<<endl;
	return 0;	
} 
