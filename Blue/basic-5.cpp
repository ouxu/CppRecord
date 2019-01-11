#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n],i;
	for (i=0;i<n;i++)
		cin>>a[i];
		
	int x;
	cin>>x;
	
	for (i=0;i<n;i++)
	{
		if (a[i]==x)
			break;
	} 
	if (i==n)
		cout<<"-1";
	else 
		cout<<i+1; 
	
	return 0;		
}
