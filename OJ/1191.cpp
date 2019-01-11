#include <iostream>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{	
		int s=1;
		for (int i=0;i<n-1;i++)
			s=(s+1)*2;
		
		cout<<s<<endl;
	}
	
	return 0;
}
