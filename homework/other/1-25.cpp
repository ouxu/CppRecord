#include<iostream>
using namespace std;

int main()
{
	int i,a;
	for(a=1;a<=7;a+=2)
	{
		{
			for(i=1;i<=a;i++)
				cout<<'*';
		}
	cout<<endl;
	}
	
	for(a=5;a>=1;a-=2)
	{
		{
			for(i=1;i<=a;i++)
				cout<<'*';
		cout<<endl;
		} 
	}
	return 0;
}

