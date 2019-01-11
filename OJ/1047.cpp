#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,s=0,m=0,t;
	cin>>n;
	
	for (int i=0;i<n;i++)
	{
		t=pow(10,i);
		m+=2*t;
		s+=m;
	}
	
	cout<<s<<endl;
	
	return 0;
}
