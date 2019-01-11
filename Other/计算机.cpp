//¼òµ¥¼ÆËã»ú.1 

#include <iostream>
using namespace std;

int main ()
{
	double a,b,s;
	char x;
	cin >>a>>x>>b;
	switch (x)
	{
	case '+':
		cout<<a<<"+"<<b<<"="<<a+b<<endl;break;
	case '-':
	    cout<<a<<"-"<<b<<"="<<a-b<<endl;break;
	case '*':
	    cout<<a<<"*"<<b<<"="<<a*b<<endl;break;
	case '/':
	    cout<<a<<"/"<<b<<"="<<a/b<<endl;break;
    default :
	    cout<<"error";break;	
    }
  
	return 0;
}
