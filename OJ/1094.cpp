#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	cin>>N;	
	long long int n,r;
	
	for (int i1=0;i1<N;i1++)
	{
		cin>>n;
		int c[20];
		
		int j=0;
		
		while (n!=0)
		{
			c[j]=n%10;
			j++;
			n=n/10;
		}
		
		for(int i=1;i<=j;i++)
		{
			r+=(pow(10,i-1));
			
			
		} 
		

		
		cout<<r<<endl;
	}
	
	return 0;
}
