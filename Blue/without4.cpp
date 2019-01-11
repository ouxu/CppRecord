#include <iostream>
using namespace std;

int main()
{
	int i,n=0;
	
	for (i=10000;i<100000;i++)
	{
		int r=0;
		if (i%10==4)
			n++,r++;
		if (((i/10)%10==4)&&(r==0))
			n++,r++;
		if (((i/100)%10==4)&&(r==0))
			n++,r++;
		if (((i/1000)%10==4)&&(r==0))
			n++,r++;	
		if (((i/10000)%10==4)&&(r==0))
			n++;
	}	
	
	cout<<"最多可发出的奖券数为： "<<90000-n<<endl;
	
	return 0;
}
	
