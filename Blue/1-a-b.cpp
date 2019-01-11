/*
	蓝桥杯国赛集训 第一周
	A - Lake Counting   
	BFS写法 
*/ 
#include <iostream>
#include <queue>

using namespace std;
const int N=100;
char c[N+2][N+2];
int n,m;
//定义八个搜索方向 
int div[8][2]={ {0,1},{0,-1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1} };
struct node{
	int x,y;	
}; 

void bfs(int a,int b)
{
	node t,next;
	queue<node> Q;
	t.x=a;
	t.y=b;
	Q.push(t);
	c[a][b]='.';
	while (!Q.empty()){
		t=Q.front();
		Q.pop();
		for(int i=0;i<8;i++){
			next.x=t.x+div[i][0];
			next.y=t.y+div[i][1];
			if (next.x>=0&&next.x<m&&next.y<n&&next.y>=0&&c[next.x][next.y]=='W'){
				Q.push(next);
				c[next.x][next.y]='.';
			}
		}
	}
}

int main()
{
	int i,j,count=0;
	cin>>n>>m;
	for (i=0;i<n;i++)
	for (j=0;j<m;j++)
		cin>>c[i][j];
					
	for (i=0;i<n;i++)
	for (j=0;j<m;j++){
		if(c[i][j]=='W'){
			bfs(i,j);
			count++;
		}
	}	
	cout<<count<<endl;
	return 0;	
} 
