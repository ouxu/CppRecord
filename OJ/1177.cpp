#include <iostream>
using namespace std;

int prima(int &m)
{
	int s=0;
	for (int i=1;i<m;i++)
	{
		if (m%i==0)
			s+=i;
	}
	
	return s;	
}

int main()
{
	int N1;
	cin>>N1;
	int m,n;
	for (int i1=0;i1<N1;i1++)
	{
		cin>>m>>n;
		if ((prima(m)==n)&&(prima(n)==m))
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;		
			
	}
	
	return 0;
}
