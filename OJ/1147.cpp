#include <iostream>
using namespace std;

int main()
{
	int n;
	long long s;
	cin>>n;
	s=n*n*n;
	
	cout<<n<<"*"<<n<<"*"<<n<<"="<<s<<"=";
	
	for (int i=n*n-n+1;i<n*n+n-1;i+=2)
		cout<<i<<"+";
	
	cout<<n*n+n-1<<endl;
	
	return 0;
}
