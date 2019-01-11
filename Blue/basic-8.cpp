#include <iostream>
using namespace std;

int main()
{
	int i,j;
	for (i=1;i<=9;i++)
	for (j=0;j<=9;j++)
		cout<<i*1000+j*100+j*10+i<<endl;
		
	return 0;	
} 
