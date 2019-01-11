#include <iostream>
using namespace std;

int main()
{
	int  a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	
	int t;
	if (a>c)
		t=a,a=c,c=t;
	if (b>c)
		t=b,b=c,c=t;
	if (a>b)
		t=a,a=b,b=t;
	
	if (a*a+b*b==c*c)
		cout<<"yes"<<endl;	
	else if	(a+b<c || a+c<b || b+c<a ||
			 b-a>c || c-a>b || c-b>a ) 
			cout<<"not a triangle"<<endl;
	else 
		cout<<"no"<<endl;
	
	return 0; 
}
