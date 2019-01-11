/*
	C++ ÉÏ»ú¿Î ¡¾Ò»¡¿      2016.4.25
	P268 £¨4£©
*/

#include <iostream>
using namespace std;

int main()
{
	//¢Ù 
	char c1[5]={'C','h','i','n','a'}; 
	for(int i=0;i<5;i++)
	{
		c1[i]=c1[i]+4;
		cout<<c1[i];
	}
	cout<<endl;
	
	//¢Ú 
	char c2[5]={'T','o','d','a','y'};
	for(int i=0;i<5;i++)
	{
		if ( c2[i]>='W' && c2[i]<='Z') 
			c2[i]=c2[i]-22;
		else if ( c2[i]>='w' && c2[i]<='z') 
			c2[i]=c2[i]-22;
		else 
			c2[i]+=4;	
		cout<<c2[i];
	}
	
	//¢Û
	char c3[5];
	for(int i=0;i<5;i++)
		cin>>c3[i];	
	for(int i=0;i<5;i++)
	{
		if ( c3[i]>='A' && c3[i]<='D') 
			c2[i]=c2[i]+22;
		else if ( c3[i]>='a' && c3[i]<='d') 
			c3[i]=c3[i]+22;
		else 
			c3[i]-=4;	
		cout<<c3[i];
	}
	cout<<endl;
		
	return 0;
}
