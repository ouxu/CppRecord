#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
	char c[101];
	cin>>c; 
	int n=strlen(c),m=0;
	for (int i=0;i<n;i++)
	{
		if ((c[i]<='z'&&c[i]>='a')||(c[i]<='Z'&&c[i]>='A'))
			m++; 
	} 
	cout<<m<<endl;
	
	return 0;
} 
