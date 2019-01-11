#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{	
		if (n==0)
			break;
		
		int a[2][n],m=0;
		
		for (int i=0;i<2;i++)
		for (int j=0;j<n;j++)
			cin>>a[i][j];
		for (int i=0;i<n;i++)
		{
			if (a[0][i]>a[1][i])
				m++;
			if (a[0][i]==a[1][i])
				n--;
		}
		
		if (m>n/2)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}	
	
	return 0;
}
