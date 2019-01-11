#include<iostream>
using namespace std;

int main()
{
	int i,a1,a2,a3;
	for(i=100;i<=999;i++)
	{
		a3=i/100;
		a2=(i-a3*100)/10;
		a1=i-a3*100-a2*10;
		
		if(a3*a3*a3+a2*a2*a2+a1*a1*a1==i)
			cout<<i<<endl;
			
	}
	return 0;
}

