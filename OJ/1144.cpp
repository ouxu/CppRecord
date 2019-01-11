#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char c[105];
	cin.getline(c,105);
	int n=strlen(c);
	for (int i=0;i<n;i++)
	{
		if (c[i]>='A'&&c[i]<='Z')
			cout<<char(c[i]+32);
		else 
			cout<<c[i];		
	}
	cout<<endl;
	return 0;
} 
