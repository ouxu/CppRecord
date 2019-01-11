#include <iostream>
using namespace std;
int main()
{
	int a=0,n;
	cin>>n;
	for (int i=1;i<=n-7;i++)
	{
		for (int j=1;j<=(n-6)/2;j++)
		{
			for (int k=1;k<=(n-3)/5;k++)
			{
				if (i*1+j*2+k*5==n)
					a++;
			}	
		}
	}
	cout<<a<<endl;
	return 0;
}
