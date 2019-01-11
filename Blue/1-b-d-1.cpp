/*
	蓝桥杯国赛集训 第一周
	B - Red and Black   
	DFS写法 
*/ 

#include <iostream>
using namespace std;

const int N=22; 
int a,b,m,n;
char c[N][N];

int dfs(int a,int b)
{
	if (c[a][b]=='#' || a>=m || b>=n || a<0 || b<0 )
		return 0;	
	else{
		c[a][b]='#';
		return 1+dfs(a,b+1)+dfs(a,b-1)+dfs(a+1,b)+dfs(a-1,b);
	} 
} 

int main()
{
	int i,j;
	while (cin>>n>>m,m||n){
		for (i=0;i<m;i++){
			for (j=0;j<n;j++){
				cin>>c[i][j];
				if (c[i][j]=='@')
				{
					a=i,b=j;
				}
			
			}
		}
		n=dfs(a,b);
		cout<<n<<endl;		
	}
	
	return 0;	
}
