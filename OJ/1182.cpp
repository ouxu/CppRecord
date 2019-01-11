#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
	char c[16];
	int n;
	cin>>n;
	for (int i1=0;i1<n;i1++)
	{
		cin>>c;
		int n=strlen(c);
		
		if (n<8)
			cout<<"NO"<<endl;
		else 
		{
			int i,a[4]={0};
			for (i=0;i<n;i++)
			{
				if (c[i]<='Z'&&c[i]>='A')
					a[0]++;
				if (c[i]<='z'&&c[i]>='a')
					a[1]++;
				if (c[i]<='9'&&c[i]>='0')
					a[2]++;
				if (c[i]=='~'||c[i]=='!'||c[i]=='@'||
					c[i]=='#'||c[i]=='$'||c[i]=='%'||c[i]=='^')
					a[3]++;				
			}
		
			int n1=0;
			for (i=0;i<4;i++)
			{
				if (a[i]>0)
					n1++; 
			}
			
			if (n1>=3)
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}
	}		
	
	return 0;
}
