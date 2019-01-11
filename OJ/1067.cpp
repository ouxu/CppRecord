#include <iostream>
#include <string.h>
using namespace std;

void aeoiu(char *c)
{
	int n=strlen(c);
	char a[n];
	int i,j=0;
	
	for (i=0;i<n;i++)
	{
		if (c[i]=='a'||c[i]=='e'||
			c[i]=='i'||c[i]=='o'||c[i]=='u')
			a[j]=c[i],j++;	
	}
	
	for (i=0;i<j;i++)
		cout <<a[i];
		
	cout <<endl;
}

int main ()
{
	char c[100];
	cin>>c;
	aeoiu(c);
	
	return 0;
}
