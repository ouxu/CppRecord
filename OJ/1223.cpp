#include <iostream>
using namespace std;

int main()
{
	const double pi=3.1415927;
	int n;
	double r,s;
	cin>>n;
	for (int i1=0;i1<n;i1++)
	{
		scanf("%lf",&r);
		s=pi*r*r;
		printf("%.6lf\n",s);
		
	}
	
	return 0;
}
