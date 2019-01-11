#include <iostream>
#include <string.h>
using namespace std;

void daoxu(char *c) 
{
	int n,i;
	char t;
	n=strlen(c);
	for (i=n-1;i>=0;i--)
		cout<<c[i];
}

int main()
{
	char c[100];
	cin>>c;
	daoxu(c);
	
	return 0;
} 
