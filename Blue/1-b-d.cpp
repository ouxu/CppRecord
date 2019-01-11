#include<stdio.h>
#include<string.h>
int a,b,n,m;
char c[22][22];
int sert(int a,int b)
{
    if(c[a][b]=='#'||a>=m||b>=n||a<0||b<0)
        return 0;
    else
    {
        c[a][b]='#';
        return 1+sert(a,b+1)+sert(a,b-1)+sert(a-1,b)+sert(a+1,b);
    }
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
                    a=i;b=j;
                }
            }
        }
            n=sert(a,b);
            printf("%d\n",n);
    }
    return 0;
}
