# include<iostream>
# include<algorithm>
using namespace std;

int main()
{
	int a[100],n,sum;
	
	float aver;
	
	while(cin>>n)
	{
		sum=0;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+n);
		
		for(int i =1;i<n-1;i++)
		{
			sum+=a[i];
		}
		
		aver = sum*1.0/(n-2);
		
		printf("%.2f",aver);
	}
	
	return 0;
}
