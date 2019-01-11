#include <iostream>
using namespace std;

int main()
{
	int N,n,a,sum;
	cin>>N;
	
	for(int i=0;i<N;i++)
	 {
	  	cin>>n;sum=0;
	    for(int i=0;i<n;i++)
	    {
			cin>>a;sum+=a;
	    }
		cout<<sum<<endl;
	 }
	 
	return 0;
}
