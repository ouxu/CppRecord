#include <iostream>
using namespace std;

void space_add(char *c)
{
	int i;
	
	for (i=0;i<4;i++)
		cout<<c[i]<<" ";
	
	cout<<endl;
}

int main()
{
	char c[4];
	cin>>c;
	space_add(c);
	
	return 0;
}
