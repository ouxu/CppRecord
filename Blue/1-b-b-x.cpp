#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

const int N=22;
char c[N][N];
int n,m,p;
int div[4][2]={{-1,0},{0,-1},{0,1},{1,0}};

struct node{
	int x,y;
};

void bfs(int a,int b)
{
	queue<node> q;
	node t,tmp;
	t.x=a,t.y=b;
	q.push(t);
	c[a][b]='#';
	
	while (!q.empty()){
		t=q.front();
		q.pop();
		for (int i=0;i<4;i++){
			tmp.x=t.x+div[i][0];
			tmp.y=t.y+div[i][1];
			if(tmp.x>=0&&tmp.x<n&&tmp.y>=0&&tmp.y<m&&c[tmp.x][tmp.y]=='.'){
				p++;
				q.push(tmp);
				c[tmp.x][tmp.y]='#';	
			}
		}		
	}
}

int main()
{
	int i,j,a,b;
	while (cin>>m>>n,n||m){
		p=1;
		for (i=0;i<n;i++)
		for (j=0;j<m;j++){
			cin>>c[i][j];		
			if(c[i][j]=='@')
				a=i,b=j;
		}
		bfs(a,b);
		cout<<p<<endl;
		
	}
	
	return 0;
}
