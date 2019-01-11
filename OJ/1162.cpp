#include <iostream>
using namespace std;

int main()
{
	int i=1,s=0,n;
	cin>>n;
	while (s<=n)
	{
		s+=i*i*i;
		i++;
	
	}
	cout<<i-2<<endl;
	
	return 0;
}
