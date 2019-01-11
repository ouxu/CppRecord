
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
	cout<<"最多可发出的奖券数为： "<<n<<endl;

	return 0;	
} 
