/*
	C++ �ϻ��� ������      2016.5.8
	P270 ��2��
*/

#include <iostream>
using namespace std;

bool prime(int x)
{
	for (int i=2;(i-1)*i<=x;i++)
	{
		if (x%i==0)
			return false;
		else 
			return true;
	}
}

bool gotbaha(int n,int i)
{
	if (prime(i)&&prime(n-i))
		return true;
	else	 
		return false;
}



int main()
{
	int n,x;
	cin>>n;
	if (n%2!=0 || n<6)
	{
		cout<<"����������Ǵ���6��ż��:  ";
	}	 
	else
	{
		for (int i=2;i<n-1;i++)
		{
			if (gotbaha(n,i))
				x=i;
		}
		cout<<n<<"="<<n-x<<"+"<<x;
	}
	
	
	return 0;
}
