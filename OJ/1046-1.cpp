#include <iostream>
#include <cstring> 
using namespace std;

int main()
{
	char c[1000];
	
	cin.getline(c,1000);
	
	int i=0,n=strlen(c);
	int a[4]={0};
	 
	for (i=0;i<n;i++)
	{
		if((c[i]<='z'&&c[i]>='a')||(c[i]<='Z'&&c[i]>='A'))
			a[0]++;
		else if(c[i]<='9'&&c[i]>='0')
			a[1]++;
		else if(c[i]==' ')
			a[2]++;
		else 
			a[3]++;	
	}	
	
	for (i=0;i<4;i++)
		cout<<a[i]<<" ";
	
	return 0;
}
