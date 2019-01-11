#include <iostream>
using namespace std;
int main()
{
	int n;
	long long int x=2,sum=0;
	cin>>n;
	for (int i=0;i<n;i++)
	  	{	
			sum+=x;
	        x=x+3;
	   	}
 	cout<<sum<<endl;
	return 0;
}
