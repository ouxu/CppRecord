# include<iostream>

using namespace std;

int main()
{
	long long int i,sol,m;
	int n; 
	m=100000007,sol=1;	
	cin>>i>>n;
	
	while(n)
	{
		
		if(n&1)
			sol=(sol*i)%m;
		i=(i*i)%m;
		n>>=1;
	}
	
	cout<<sol<<endl;
	
	return 0;
}
