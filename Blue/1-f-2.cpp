#include<bits/stdc++.h>
using namespace std;

int a[500];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        int x;
		scanf("%d",&x);
		
        for(int j=1;j<=x;j++)
        {
            int y;
			scanf("%d",&y);
            a[y]=1;
        }
    }
    int flag = 0;
    
    for(int i=1;i<=m;i++)
    {
        if(a[i]==0)
            flag = 1;
    }
    
    if(flag)
		return puts("NO");
    else 
		puts("YES");
}
