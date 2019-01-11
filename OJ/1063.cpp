#include <iostream>
using namespace std;

void prime(int a)
{
	int i,n;
	for (i=2;i<a;i++)
	{
		if (a%i==0)	
			break;			
	}	
	if (i==a)
		cout<<"prime"<<endl;
	else
		cout<<"not prime"<<endl;	
}

int main()
{
	int a;
	cin>>a;
	prime(a); 
	
	return 0;
}
