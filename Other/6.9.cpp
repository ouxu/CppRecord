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
	
	cout<<"ff���ִ����� "<<m<<endl;
	cout<<"fl���ִ����� "<<n<<endl;
	cout<<"fi���ִ����� "<<i<<endl; 
	cout<<"�������ִ�����"<<j<<endl; 
	
	system("pause");
	return 0;
}
