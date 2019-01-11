#include <iostream>

using namespace std;

int main()
{
	int N,i,n,x;
	cin>>N;
	n=N;
	int c[1050]={0};
	
	for (i=0;i<N;i++) 	
	{
		cin>>x;
		
		if (c[x]==0)
			c[x]=x,n--;
	}
	
	cout<<N-n<<endl;
	for (i=0;i<1005;i++) 	
	{
	
		if (c[i]!=0)
			cout<<c[i]<<" ";
	}
	
	return 0;
}
