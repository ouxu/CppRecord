#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n;
	//while (cin>>n)
	cin>>n;
	{
		int a[n][n]={0};
		//memset(a,0,sizeof(a));
		a[0][0]=1;
	
		for (int i=1;i<n;i++)
		{
			for (int j=0;j<=i;j++)
			{
				if (a[i-1][j]==0)
					a[i][j]=1;
				else 
					a[i][j]=a[i-1][j]+a[i-1][j-1];
				//cout<<a[i][j];	
			}
		}
	
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<i;j++) 
				cout<<a[i][j]<<" ";
			
			cout<<a[i][i]<<endl;
		}		
	//	cout<<endl;
	}
	
	return 0;
}
