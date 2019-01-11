#include <iostream>
using namespace std;

int main()
{
	char n[8];
	int i=0;
	cin>>n;
	while (n[i]!='\0')
	{
		n[i]=n[i]+4;
		i++;
	}	
	cout<<n<<endl;
	
	return 0;
}
