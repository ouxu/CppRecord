#include <iostream>
using namespace std;

int min(int a,int b)
{
	int t,x,y;
	(a>b)?(x=a,y=b):(x=b,y=a);
	
	while (y!=0)
	{
		t=x%y;
		x=y;
		y=t;
	}
	return x;
}
imt max (int a,int b,int x)
{
	return a*b/x;
}


int main()
{
	int a,b,x;
	cin>>a>>b;
	min(a,b)
	return 0;
}
