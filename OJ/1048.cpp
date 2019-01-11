#include <iostream>
using namespace std;
int main ()
{
	int n;
	long long int s=0,m=1;
	cin>>n;
	for(int j=1;j<=n;j++)
		m*=j,s+=m;
	cout<<s<<endl;
	return 0;
}
