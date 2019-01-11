#include <iostream>
using namespace std;

int main()
{
	char c;
	while (1)
	{
		c=getchar();
		if (c=='\n')
			break;
		if (c>='a'&&c<'z')
			c++;
		if (c=='z')
			c=='a';	
		cout<<c;
	}
	cout<<endl;
	return 0;
}
