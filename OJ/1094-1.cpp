#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
	char c[20];
	int N;
	cin>>N;
	for (int i1=0;i1<N;i1++)
	{
		cin>>c;
		int n=strlen(c);
	
		int i=0;
		for (i=n-1;i>=0;i--)
		{
			if (c[i]!='0')
				break;
		}

		for (int j=i;j>=0;j--)
		{
			cout<<c[j];
		}
		
		cout<<endl;
	}	
	
	return 0;
}
