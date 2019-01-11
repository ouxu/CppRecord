#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	long long int start,end,i,sum,m,d;
	cin>>n;
	start=pow(10,n-1),end=pow(10,n)-1;
	i=start;
	
	if (i<=end)
	{
		sum=0;
		m=i;
		for (;m!=0;m=m/10)
			d=m%m,
			sum=sum+pow(d,n);
		if (sum=i)
		cout<<i<<'/t';
		
		
    i++;
	}
	
	
	
	
	return 0;
 } 
