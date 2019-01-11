#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[1000];
	
	int i=0,ch;
	
	for (i=0;i<1000;i++)
	{
		c[i]='0';
	}
	
	i=0;
		
	while ((ch=getchar())!=EOF)
	{
		if ((ch<=90&&ch>=65)||(ch<=122&&ch>=97))
		{
			c[i]=ch;
			i++;
		}	
		else if (ch==32||ch=='\n')
		{
			c[i]=ch;
			i++;	
		}
		else 
			continue;
	}
	
	for (i=0;i<1000;i++)
	{
		if (c[i]!='0')
			cout<<c[i];
	}

	return 0;
} 

