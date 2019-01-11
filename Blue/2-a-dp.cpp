#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
const int N=5000;

int dp[2][N+5]={0}; 

//int max(int x,int y)
//{
//	return (x>y)?x:y;
//} 

void LCS(string s1,string s2)
{
	memset(dp,0,sizeof(dp));
	int m=s1.length(),n=s2.length();
	for (int i=1;i<=m;i++)
	for (int j=1;j<=n;j++)
	{
		if (s1[i-1]==s2[j-1])
			dp[i%2][j] = dp[1-i%2][j-1]+1;	
		else 
			dp[i%2][j]=max(dp[1-i%2][j],dp[i%2][j-1]);
	}	
}

int main()
{
	int n;
	cin>>n;
	string s1,s2;
	cin>>s1;
	s2=s1;
	reverse(s2.begin(),s2.end());
	LCS(s1,s2);

	cout<<n-dp[n%2][n]<<endl;	
		
	return 0;
}
