#include<iostream>
using namespace std;

int main()
{
	int a=3,b=4,c=5,x,y;
	
	if(a+b>c&&b==c)
		cout<<1<<endl;
	else
		cout<<0<<endl;

	if(a||b+c&&b-c)
		cout<<1<<endl;
	else
		cout<<0<<endl;

	if(!(a>b)&&!c||1)
		cout<<1<<endl;
	else
		cout<<0<<endl;

	if(!(x=a)&&(y=b)&&0)
		cout<<1<<endl;
	else
		cout<<0<<endl;

	if(!(a+b)+c-1&&b+c/2)
		cout<<1<<endl;
	else
		cout<<0<<endl;

	return 0;
}

