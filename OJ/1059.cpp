#include <iostream>
using namespace std;
int main()
{
	int a[10],i,n,t;
	
	for (i=0;i<9;i++)
		cin>>a[i];
	cin>>a[9];
	
	for (n=9;n>0;n--)
	{
		if (a[n]<a[n-1])
		t=a[n],a[n]=a[n-1],a[n-1]=t;
	}
	
	for (i=0;i<10;i++)
		cout<<a[i]<<endl;
	
	return 0;
}
