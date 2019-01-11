#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

#define eps 10e-10
#define N 15

int ans;

void dfs(int alco,int store,int flower, int pre)
{
    if(store == 0 && flower == 0 ){
        if(pre == 0 && alco == 0)ans++;
        return;
    }
    if(store > 0){
        dfs(alco*2,store-1,flower,1);
    }

    if(alco > 0 && flower > 0){
        dfs(alco-1,store,flower-1,0);
    }
    return ;
}

int main()
{
    ans = 0;
    dfs(2,5,10,-1);
    printf("%d\n",ans);

    return 0;
}

