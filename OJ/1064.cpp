#include <iostream>
using namespace std;

void huhuan(int a[3][3])
{
	int i,j,t;
	for (i=0;i<3;i++)
	for (j=i;j<3;j++)
	{
		if (i!=j)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}
	} 
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	int a[3][3];
	int i,j;
	for (i=0;i<3;i++)
	for (j=0;j<3;j++)
		cin>>a[i][j];
	huhuan(a);	
	return 0;
}
