#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	char ch;
	int n=0,i=0;
	
	while (cin>>ch)
	{
		switch (ch) 
		{
			case 'a':
				++n;break;
			default:
				++i;break;
		}
	}	
	
	cout<<n<<" "<<i<<endl; 
	
	system("pause");
	return 0;
}
