#include<stdio.h>
#include<iostream>
#include<queue>
using namespace std;
typedef struct
{
    int x,y;
}node;
int n,m,a,b;
char c[25][25];
void sert()
{
    int i,f[4][2]={0,1,0,-1,1,0,-1,0},p=0;;
    queue<node> q;  
    node t,temp;
    t.x=a;
    t.y=b;
    q.push(t);
    while(!q.empty())
    {
       t=q.front();
       q.pop();
       for(i=0;i<4;i++)
       {
           temp.x=t.x+f[i][0];
           temp.y=t.y+f[i][1];
           if(temp.x>=0&&temp.x<m&&temp.y<n&&temp.y>=0&&c[temp.x][temp.y]!='#')
           {
               p++;
               q.push(temp);
               c[temp.x][temp.y]='#';
           }
       }
    }
    printf("%d\n",p);
}
int main()
{
    int i,j;
    while(scanf("%d%d",&n,&m),n||m)
    {
        for(i=0;i<m;i++)
        {
            getchar();
            for(j=0;j<n;j++)
            {
                scanf("%c",&c[i][j]);
                if(c[i][j]=='@')
                {
                    a=i;
                    b=j;
                }
            }
        }
            sert();
    }
    return 0;
}
