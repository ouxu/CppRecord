#include <stdio.h>
#include <queue>
using namespace std;
#define N 102

char map[N][N];
int n,m;

void search(int i,int j)
{
//    if(map[i][j-1]=='W') { map[i][j-1]='.'; search(i,j-1); }
    if(map[i][j+1]=='W') { map[i][j+1]='.'; search(i,j+1); }
//    if(map[i-1][j]=='W') { map[i-1][j]='.'; search(i-1,j); }
    if(map[i+1][j]=='W') { map[i+1][j]='.'; search(i+1,j); }
//    if(map[i-1][j-1]=='W') { map[i-1][j-1]='.'; search(i-1,j-1); }
//    if(map[i-1][j+1]=='W') { map[i-1][j+1]='.'; search(i-1,j+1); }
    if(map[i+1][j-1]=='W') { map[i+1][j-1]='.'; search(i+1,j-1); }
    if(map[i+1][j+1]=='W') { map[i+1][j+1]='.'; search(i+1,j+1); }
}

int main()
{
    int i,j,count;
    while(~scanf("%d %d",&n,&m))
    {
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

