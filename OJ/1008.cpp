#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,t,x,y;
	cin>>a>>b;
	(a>b)?(x=a,y=b):(x=b,y=a);
	while (y!=0)
		{
			t=x%y;
			x=y;
	 		y=t;
		}
	cout<<x<<endl;
	cout<<(a*b)/x<<endl; 
	return 0;
} 
