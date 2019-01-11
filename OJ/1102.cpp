#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	long long d;
	while (cin>>a)
	{
		cin>>b>>c;
		d=(pow(a,b));
		cout<<d%c<<endl;		
	}
	
	return 0;
}
