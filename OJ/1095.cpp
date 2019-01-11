#include <iostream>
using namespace std;
int main()
{
	int n,m,x,i=1;
	double y;
	while (cin>>n>>m)
	{
		if (n==0&&m==0)
			break;
		else 
		{
			x=(n*4-m)/2;
			y=(n*4.0-m)/2.0;
			if(x==y&&x>=0&&n-x>=0)
				cout<<x<<" "<<n-x<<endl;
			else 
				cout<<"No answer"<<endl;
		}
	}
	return 0;
}
