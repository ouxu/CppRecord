#include <iostream>
using namespace std;
int main()
{
	int n;
	int N[2][3],M[3];
	cin>>n;
	
	for (int k=0;k<n;k++)
	{
	
		for (int i=0;i<2;i++)
		{
			for (int j=0;j<3;j++)
			{
				cin>>N[i][j];
			}	
		}
		if (N[0][2]+N[1][2]<60)
			M[2]=N[0][2]+N[1][2];
		else
			M[2]=N[0][2]+N[1][2]-60,
			N[0][1]+=1;
		if (N[0][1]+N[1][1]<60)
			M[1]=N[0][1]+N[1][1];
		else
			M[1]=N[0][1]+N[1][1]-60,
			N[0][0]+=1;
		M[0]=N[0][0]+N[1][0];	
		cout<<M[0]<<" "<<M[1]<<" "<<M[2]<<endl;	
	}
	return 0;
}
