#include <iostream>
using namespace std;
int main()
{
	int a[3][3],i,j,suma=0,sumb=0;
	for (i=0;i<3;i++)
	for (j=0;j<3;j++)
	{
		cin>>a[i][j];
		if (i==j)
			suma+=a[i][j];
		if (i+j==2)
			sumb+=a[i][j];
	}
	cout<<suma<<" "<<sumb<<endl;
	
	
	return 0;
}
