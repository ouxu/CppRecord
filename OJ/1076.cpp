#include <iostream>
#include <cstring> 
using namespace std;

int main() 
{
	char c[100];
	cin.getline(c,100);
	int n=strlen(c);
	
	for (int i=0;i<n;i++)
	{
		if (c[i]>='a'&&c[i]<'z')
			c[i]++;
		if (c[i]=='z')
			c[i]='a';
		cout<<c[i];
	}	
	cout<<endl;
	
	return 0;
}
