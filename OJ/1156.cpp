#include <iostream>
using namespace std;

int main()
{
	int i,a,b;
	for (i=1000;i<10000;i++)
	{
		a=i%100;
		b=(i-a)/100;
		
		if ((a+b)*(a+b)==i)
			cout<<i<<" ";
	}
	cout <<endl;
	
	return 0;
}
