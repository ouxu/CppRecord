#include <iostream>
using namespace std;
int main ()
{
	int n,s=1;
	cin>>n;
	for (int i=1;i<n;i++)
		s=2*(s+1);
	cout<<s<<endl;
	return 0;	
}
