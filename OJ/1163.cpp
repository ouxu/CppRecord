#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int s=sqrt(n);
	for (i=2;i<s;i++)
	{
		if (n%i==0)
			break;
	}
	
	if (i==s)
		cout<<"1"<<endl;
	else 
		cout<<"0"<<endl;
	
}
