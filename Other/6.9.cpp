#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	char a;
	int m=0,n=0,i=0,j=0;
	
	while (cin>>a)
	{
		switch(a)
		{ 
			case 'f'&'f':
				m++;break;
			case 'l':
				n++;break;
		 	case 'i':
			 	i++;break;
		 	default:
			 	j++;break;
		}
	}
	
	cout<<"ff出现次数： "<<m<<endl;
	cout<<"fl出现次数： "<<n<<endl;
	cout<<"fi出现次数： "<<i<<endl; 
	cout<<"其他出现次数："<<j<<endl; 
	
	system("pause");
	return 0;
}
