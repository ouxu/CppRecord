#include <iostream>
using namespace std;

int f(int n)
{
	if (n==1)
		return 0;
	else if (n==2)
		return 1;
	else 
		return (n-1)*(f(n-1)+f(n-2));	
}		

int main ()
{
	int n;
	while (cin>>n)
		cout<<f(n)<<endl;
	return 0;
}
