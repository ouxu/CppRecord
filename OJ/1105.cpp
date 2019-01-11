#include <iostream>
using namespace std;

void f1(int n,int p)
{
	int s[100],m=0,t;
	while (n!=0)
	{
		t=n%p;
		n=n/p;
		s[m]=t;
		m++;
	}	
	
	for (int i=0;i<m;i++)
		cout<<s[m-i-1];
	cout<<endl;
}

int main()
{
	int n,p;
	while (cin>>n>>p)
	{
		if (n=='#')
			break;
			 
		p=-p;
		if (n>0)
			n=n+128,f1(n,p);
	}
	
	return 0;
}
