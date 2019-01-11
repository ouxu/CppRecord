#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c;
	for (int i=100;i<1000;i++)
	{
		a=i%10;
		b=i/10%10;
		c=i/100;
		
		if(pow(a,3)+pow(b,3)+pow(c,3)==i)
			cout<<i<<endl; 
	}
	
	return 0; 
}
