#include <iostream>
using namespace std;
int main()
{
	int T,N,t;
	int i,j,k;
	cin>>T;
	for (i=0;i<T;i++)
	{
		cin>>N;
		int n[N];
		for (j=0;j<N;j++)	
			cin>>n[j];
		for (k=0;k<N;k++)
		for (j=1;j<N;j++)
		{	
			if (n[j]<n[j-1])
				t=n[j],n[j]=n[j-1],n[j-1]=t;	
		}
		for (j=0;j<N-1;j++)
			cout<<n[j]<<" ";
		cout<<n[N-1]<<endl;
	}		
	return 0;
}
