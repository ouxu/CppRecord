#include <iostream>
#include <cstring>
using namespace std;

char c[1000][100];
char t[100];

bool judge(char *a,char *b)
{
	int i;
	if (strlen(a)>strlen(b))
		return true;
	else if(strlen(a)==strlen(b))
	{
		for (i=0;i<100;i++)
		{
			if (a[i]<b[i])
				return true;
			else if (a[i]==b[i])
				continue;
			else 
				return false;			
		 } 
	}
}
	
void sort(int len)
{
	for (int i=0;i<len-1;i++)
	for (int j=0;j<len-1-i;j++)
	{
		if (judge(c[j],c[j+1]))
		{
			strcpy(t,c[j]);
			strcpy(c[j],c[j+1]);
			strcpy(c[j+1],t);
		}		
	}
}
	
int main()
{
	int n;
	int i,j;
	cin>>n;
		
	for (i=0;i<n;i++)
		cin>>c[i];
		
	sort(n);
	
	for (i=0;i<n;i++)
		cout<<c[i]<<endl;
	
	return 0;
}
