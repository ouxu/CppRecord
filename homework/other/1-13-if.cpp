#include<iostream>
using namespace std;

int main()
{
	long int i;
	cin>>i;
	
	if(i<=100000)
		cout<<i*0.1;
	else if(i<=200000)
		cout<<10000+(i-100000)*0.075;
	else if(i<=400000)
		cout<<17500+(i-200000)*0.05;
	else if(i<=600000)
		cout<<27500+(i-400000)*0.03;
	else if(i<=1000000)
		cout<<33500+(i-600000)*0.015;
	else
		cout<<39500+(i-1000000)*0.01;
		
	return 0;
}

