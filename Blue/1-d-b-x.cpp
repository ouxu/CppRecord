/*
	蓝桥杯国赛集训 第一周
	D - Catch That Cow   
	BFS写法 
*/ 

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

const int N=1000000;
int map[N+10]; 
int n,k;

struct node{
	int x,step;
};

//检查现在所在点是否来过 
bool check(int x)
{
	if(x>=N || x<0 || map[x])
		return 0;
	return 1;
}

int bfs(int x)
{
	queue<node> Q;
	int i;
	node a,next;
	a.x=x;
	a.step=0;
	map[x]=1;
	Q.push(a);
	
	while (!Q.empty()){
		a=Q.front();
		Q.pop();
		if (a.x==k)
			return a.step;
		next=a;
		
		next.x=a.x+1;
		if(check(next.x))
        {
            next.step = a.step+1;
            map[next.x] = 1;
            Q.push(next);
        }
		next.x=a.x-1;
		if(check(next.x))
        {
            next.step = a.step+1;
            map[next.x] = 1;
            Q.push(next);
        }
		next.x=a.x*2;
		if(check(next.x))
        {
            next.step = a.step+1;
            map[next.x] = 1;
            Q.push(next);
        }	
	}	
	return -1;		
}
	
int main()
{
	int ans;
	while(cin>>n>>k){
		memset(map,0,sizeof(map));
		cout<<bfs(n)<<endl; 
	}	
	
	return 0;
}
