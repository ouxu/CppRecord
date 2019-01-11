#include <iostream>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n;
	
	m=(n+1)*n/2;
	cout<<m<<endl;
	
	m=0;
	for (i=1;i<=n;i++)
		m=m+i; 
		
	cout<<m<<endl;
	
	return 0;
} 
