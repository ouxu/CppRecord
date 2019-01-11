#include <iostream>
#include <cstring>
using namespace std;
const int N=1000;
char str1[N],str2[N];

int max(int x,int y)
{
	return (x>y)?x:y;	
}

int main()
{
	gets(str1);
	gets(str2);
	int m=strlen(str1),n=strlen(str2);
	int L[m+5][n+5];
	memset(L,0,sizeof(L)); 
	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++)
	{
		if (str1[i-1]==str2[j-1]) 
			L[i][j]=L[i-1][j-1]+1;
		else 
		{
			L[i][j]=max(L[i][j-1],L[i-1][j]);
		}
	}
		
	return 0;	
}
