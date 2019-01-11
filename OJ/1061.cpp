#include <iostream>
using namespace std;

int m1(int a,int b)
{
	int x,y,t;
	(a>b)?(x=a,y=b):(x=b,y=a);
	while (y!=0)
		{
			t=x%y;
			x=y;
	 		y=t;
		}
	return x;
}

int m2(int &a,int &b,int x)
{
	return a*b/x;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<m1(a,b)<<" "<<m2(a,b,m1(a,b))<<endl;
	
	return 0;
}
