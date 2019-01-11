#include <iostream>
#include <cstring>
using namespace std;
const int N=8;

char map[N+2][N+2];
int n,k,vis[N+2],count=0;

void dfs(int cur,int num)
{
	if (num==k) {
		count++;
		return;
	}

	for (int i=cur; i<n; i++)
		for (int j=0; j<n; j++) {
			if (map[i][j]=='#' && !vis[j]) {
				vis[j]=1;
				dfs(i+1,num+1);
				vis[j]=0;
			}
		}

}
int main()
{
	while (cin>>n>>k,n!=-1 && k!=-1) {
		memset(vis,0,sizeof(vis));
		memset(map,0,sizeof(map));

		for (int i=0; i<n; i++)
			for (int j=0; j<n; j++)
				cin>>map[i][j];
		count=0;
		dfs(0,0);

		cout<<count<<endl;
	}
	return 0;
}
