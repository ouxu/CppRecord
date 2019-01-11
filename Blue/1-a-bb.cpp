#include <stdio.h>
#include <queue>
using namespace std;
#define N 102

char map[N][N];
int n,m;
struct Node
{
  int x,y;
};
int dis[10][3]={ {0,1},{0,-1},{-1,0},{1,0},{-1,-1},{-1,1},{1,-1},{1,1} };
void search(int a,int b)
{
  /*map[a][b]='.';
  for(int i=0;i<8;i++)
  {
    int tmpx=a+dis[i][0];
    int tmpy=b+dis[i][1];
    if(tmpx>0 && tmpx<=n && tmpy>0 && tmpy<=m && map[tmpx][tmpy]=='W' ){
      //map[tmpx][tmpy]='.';
      search(tmpx,tmpy);
    }
  }*/
  Node tmp,be;
  be.x=a,be.y=b;
  queue<Node> v;
  v.push(be);
  map[a][b]='.';
  while(!v.empty())
  {
    be=v.front();
    v.pop();
    for(int i=0;i<8;i++)
    {
      tmp.x=be.x+dis[i][0];
      tmp.y=be.y+dis[i][1];
      if(tmp.x>0 && tmp.x<=n && tmp.y>0 && tmp.y<=m && map[tmp.x][tmp.y]=='W' )
      {
        v.push(tmp);
        map[tmp.x][tmp.y]='.';
      }
    }
  }
}

int main()
{
  int i,j,count;
//  while(~scanf("%d %d",&n,&m))
  {
  	scanf("%d %d",&n,&m);
    getchar();
    count=0;
    for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
        scanf("%c",&map[i][j]);}  ///È±ÁËÀ¨ºÅ£¬º¦ËÀÈË°¡
      getchar();}
    for(i=1;i<=n;i++)
      for(j=1;j<=m;j++)
        if(map[i][j]=='W')
        {
          //printf("%d %d\n",i,j);
          search(i,j);count++;
        }
    printf("%d\n",count);
  }
  return 0;
}
