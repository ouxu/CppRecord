#include <iostream>

using namespace std;

int main()
{
	int n;
	long long  s=0,c=1;
	
	cin>>n;
	
	for (int i=1;i<=n;i++)
	{
		c*=i;
		s+=c;
	}
	
	cout<<s<<endl;
	
	return 0;
}
