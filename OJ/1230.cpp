#include <iostream>
using namespace std;
int main ()
{
	int n,a,b;
	cin>>n;
	while (n>0)
		{
			cin>>a>>b;
			a=a%100;
			b=b%100;
			cout <<(a+b)%100<<endl;
			n--;	
		}	o
	return 0;
}
