#include<iostream>
using namespace std;

int main()
{
	long i,k;
	cin>>i;
	k=i/100000;
	
	switch(k)
	{
		case 0:
			cout<<i*0.1;break;
		case 1:
			cout<<10000+(i-100000)*0.075;break;
		case 2:
		case 3:
			cout<<17500+(i-200000)*0.05;break;
		case 4:
		case 5:
			cout<<27500+(i-400000)*0.03;break;
		case 6:
		case 7:
		case 8:
		case 9:
			cout<<33500+(i-600000)*0.015;break;
		default:
			cout<<39500+(i-1000000)*0.01;
	}
	
	return 0;
}

