#include <iostream>
#include <queue>
using namespace std;

char map[102][102];
int n,m;

void search(int i,int j)
{
    if(map[i][j-1]=='W') { map[i][j-1]='.'; search(i,j-1); }
    if(map[i][j+1]=='W') { map[i][j+1]='.'; search(i,j+1); }
    if(map[i-1][j]=='W') { map[i-1][j]='.'; search(i-1,j); }
    if(map[i+1][j]=='W') { map[i+1][j]='.'; search(i+1,j); }
    if(map[i-1][j-1]=='W') { map[i-1][j-1]='.'; search(i-1,j-1); }
    if(map[i-1][j+1]=='W') { map[i-1][j+1]='.'; search(i-1,j+1); }
    if(map[i+1][j-1]=='W') { map[i+1][j-1]='.'; search(i+1,j-1); }
    if(map[i+1][j+1]=='W') { map[i+1][j+1]='.'; search(i+1,j+1); }
}

int main()
{
    int i,j,count=0;
   	cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
                cin>>map[i][j];
			}  ///»±¡À¿®∫≈£¨∫¶À¿»À∞°
        }
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        	if(map[i][j]=='W'){
                    //printf("%d %d\n",i,j);
                search(i,j);count++;
            }
    cout<<count<<endl;
    
    return 0;
}

