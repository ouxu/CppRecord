# include<iostream>
# include<stdlib.h>
using namespace std;

void mymax(int &a,int &b)
{
	if (a > b)
	{
		int t=a;
		b=t;
		a=b;
	}
}

int main()
{
	int a,b;
	mymax(a,b);
	cin>>a>>b;
	
	int j=0;
	
	for(int i=a;i<=b;i++)
	{
		cout<<i<<" ";
		if(j==10)
		{
			cout<<endl;
			j=0;
		}		
		j++;
	}
	
	return 0;
}
