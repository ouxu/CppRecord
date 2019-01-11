#include<iostream>
using namespace std;

int main()
{
	int i,a;
	for(a=0;a<7;a+=2)
	{
		{
			for(i=0;i<=a;i++)
				cout<<'*';
		}
	cout<<endl;
	}
	
	for(a=5;a>0;a-=2)
	{
		{
			for(i=0;i<a;i++)
				cout<<'*';
		cout<<endl;
		} 
	}
	return 0;
}

