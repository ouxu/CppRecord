#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long a[n];
	a[0]=3,a[1]=4,a[2]=5;
	for (int i=3;i<n;i++)
		a[i]=a[i-1]+a[i-2]+a[i-3];
	
	cout<<a[n-1]<<endl;
	
	return 0;
}
