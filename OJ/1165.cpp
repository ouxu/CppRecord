#include <iostream>
using namespace std;

int main()
{
	int n;
	float s=100.0;
	float m=100.0;
	cin>>n;
	
	for (int i=1;i<n;i++)
	{
		m+=s;
		s=s/2.0;		
	}
	
	printf("%.4f\n",m);
	
	return 0;
}
