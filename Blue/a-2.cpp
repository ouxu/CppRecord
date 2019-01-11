#include <iostream> 
#include <cmath> 
using namespace std; 
int ti[11];  

void dfs(int cur, int score) 
{ 

	int i;  
	if(cur >= 11 && score == 100) 
	{ 
		for(i = 1;i <= 10;i++)  
			cout<<ti[i]; 
		
			cout<<endl; 
	} 
	else if(cur < 11) 
	{ 
		ti[cur] =0; 
		dfs(cur + 1,score - cur); 
		ti[cur] = 1; //
		dfs(cur + 1,score * 2); 
	} 

}  

int main() 
{ 
	dfs(1,10); 
	return 0; 
} 

