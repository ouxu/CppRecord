/*
	C++ 上机课 【一】      2016.4.25
	P269 （2）
*/

#include <iostream>
using namespace std;

int main()
{
	int i,j,sum,t;		//t是为了最后一个输出无 ， 
	
	for (i=2;i<1000;i++)
	{
		
		sum=0;
		for (j=1;j<i;j++)
		{
			if (i%j==0)
				sum+=j,t=j;	
			
		}
		if (sum==i)
		{
			cout<<i<<", its factors are ";
			for (j=1;j<t;j++)
			{
				if (i%j==0)
				{
					cout<<j<<", ";					
				}	
			}
			cout<<t<<endl;
		}	
		
	}
		
	return 0;
}
