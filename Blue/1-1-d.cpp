#include <iostream>
using namespace std;

int n,m;
char c[102][102];
void dfs(int i,int j)
{
	if (c[i][j-1]=='W')
		c[i][j-1]='.',dfs(i,j-1);
	if (c[i][j+1]=='W')
		c[i][j+1]='.',dfs(i,j+1);

	if (c[i-1][j]=='W')
		c[i-1][j]='.',dfs(i-1,j);

	if (c[i-1][j-1]=='W')
		c[i-1][j-1]='.',dfs(i-1,j-1);
	if (c[i+1][j-1]=='W')
		c[i+1][j-1]='.',dfs(i+1,j-1);

	if (c[i-1][j+1]=='W')
		c[i-1][j+1]='.',dfs(i-1,j+1);

	if (c[i+1][j+1]=='W')
		c[i+1][j+1]='.',dfs(i+1,j+1);
	if (c[i+1][j]=='W')
		c[i+1][j]='.',dfs(i+1,j);


}


int main()
{
	int i,j,count=0;
	cin>>n>>m;

	for(i=1; i<=n; i++)
		{
			for(j=1; j<=m; j++)
				{
					cin>>c[i][j];
				}
		}
	for(i=1; i<=n; i++)
		{
			for(j=1; j<=m; j++)
				{
					if (c[i][j]=='W')
						{
							dfs(i,j);
							count++;
						}
				}
		}

	cout<<count<<endl;
	return 0;
}
