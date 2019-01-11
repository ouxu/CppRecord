#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,n;
	long long int s=0,x,S=0;
	cin>>a>>n;
	
	for (int i=0;i<n;i++)
		x=pow(10,i)*a,
		s+=x,
		S+=s;
	cout<<S<<endl ;	
	
	return 0;
}
