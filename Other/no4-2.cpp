
#include <iostream>
using namespace std;

int main()
{
	int i,n=0;
	for (i=10000;i<100000;i++)
	{
		if 	(
			(i%10!=4)&&((i/10)%10!=4)&&
			((i/100)%10!=4)&&((i/1000)%10!=4)
			)
		n++;	
	}	
	cout<<"���ɷ����Ľ�ȯ��Ϊ�� "<<n<<endl;

	return 0;	
} 
