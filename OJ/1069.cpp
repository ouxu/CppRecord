#include <iostream>
#include <string.h>
using namespace std;

void sum_diff(char *c)
{
	int a[4]={0},i;
	int n=strlen(c);
	
	for (i=0;i<n;i++)
	{
		if ((c[i]<='z'&&c[i]>='a')||
			(c[i]<='Z'&&c[i]>='A')) 
			a[0]++;
		else if (c[i]<='9'&&c[i]>='0')
			a[1]++;
		else if (c[i]==' ')
			a[2]++;
		else 
			a[3]++;
	}	
	
	for (i=0;i<4;i++)
		cout <<a[i]<<" ";
	cout <<endl;
}

int main ()
{
	char c[100];
	cin.getline(c,100);
	sum_diff(c);
	
	return 0;
}
