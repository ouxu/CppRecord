#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T,i1;
	cin>>T;
	for (i1=0;i1<T;i1++)
	{
		string a1,b1;
		cin>>a1>>b1;
		
		int a[1001]={0},b[1001]={0};
		
		a[0]=a1.length();
		b[0]=b1.length();
			
		for (int i=1;i<=a[0];i++)
			a[i]=a1[a[0]-i]-'0';
		for (int i=1;i<=b[0];i++)
			b[i]=b1[b[0]-i]-'0';		

		int i,k;
		k=((a[0]>b[0])?a[0]:b[0]);
	
		for (i=1;i<=k;i++)
		{
			a[i+1]+=(a[i]+b[i])/10;
			a[i]=(a[i]+b[i])%10;
		}	
	
		if (a[k+1]>0)
			a[0]=k+1;
		else 
			a[0]=k;
			
		cout<<"Case "<<i1+1<<":"<<endl;
		cout<<a1<<" + "<<b1<<" = ";

		for (i=a[0];i>0;i--)
			cout<<a[i];
		cout<<endl;			
	}
	
	return 0;	
}
