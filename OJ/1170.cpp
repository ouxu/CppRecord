#include <iostream>
using namespace std;

int main()
{
	int n;
	double s=0.0;
	cin>>n;
	for (int i=1;i<=n;i++)
		s+=1.0/i;
	
	printf("%.6lf \n",s);
	return 0;
	
}
