#include <iostream>
using namespace std;

int main()
{
	
	int n,s=0;
	cin>>n;
	for (int i=1;i<=n;i+=2)
		s+=i;
	
	cout<<s<<endl;
	return 0;	
} 
