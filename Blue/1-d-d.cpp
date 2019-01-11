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
		//ans=bfs(n);
		cout<<bfs(n)<<endl; 
	}	
	
	return 0;
}
