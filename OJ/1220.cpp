#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[225];
	cin>>c;
	int n=strlen(c);
	
	char a[n];
	char b[n];
	int i;
	for (i=0;i<n;i++)
		b[i]=c[i],
		a[i]=c[n-i-1];
	
	for (i=0;i<n;i++)
	{	
		if (a[i]!=b[i])
			break;		
	}
	
	if (i==n)
		cout<<"Y"<<endl;
	else 
		cout<<"N"<<endl;
	return 0;
}
