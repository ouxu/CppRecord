#include <iostream>
using namespace std;

const int mod=10007;
const int max=1000+10;
int ans[max];

int main()
{
 
	int x;
	cin>>x;
	ans[1]=ans[2]=1; 

	for (int i=3;i<=x;i++)
		ans[i]=(ans[i-1]+ans[i-2])%mod;		
	
	cout<<ans[x]<<endl;

	return 0;
} 
