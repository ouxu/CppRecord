#include <iostream>
using namespace std;
int main()
{
	int a,t;
	long int n;
	cin>>a;
	if  (a>9999)
		t=10000,n=5;
	else if (a>999)
		t=1000,n=4;
	else if (a>99)
		t=100,n=3;
	else if (a>9)
		t=10,n=2;
	else 
		t=1,n=1;
	cout<<n<<endl;
	int num[n];
	for (int i=0;i<n-1;i++)
		{
			num[i]=a/t;
			cout<<num[i]<<" ";
			a=a%t;
			t=t/10;		
		}
		num[n-1]=a/t;
		cout<<num[n-1]<<endl;
	for (int i=0;i<n;i++)
		{
			cout <<num[n-1-i];
		}	
	return 0;
}
