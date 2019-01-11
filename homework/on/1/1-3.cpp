#include <iostream>
using namespace std;

int main()
{
	for (int i=1;i<=7;i+=2)
	{
		for (int j=i;j>0;j--)
			cout<<'*';	
		cout<<endl;
	}
	
	for (int i=5;i>=1;i-=2)
	{
		for (int j=i;j>0;j--)
			cout<<'*';	
		cout<<endl;
	}
	
	char space=' '; 
	for (int i=1;i<=7;i+=2)
	{
		for (int j=(7-i)/2;j>0;j--)
			cout<<' ';
		for (int j=i;j>0;j--)
			cout<<'*';	
		cout<<endl;
	}
	for (int i=5;i>=1;i-=2)
	{
		for (int j=(7-i)/2;j>0;j--)
			cout<<' ';
		for (int j=i;j>0;j--)
			cout<<'*';	
		cout<<endl;
	}
	
	return 0;
}
