#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n,max=0,min=100,sum;
	double c;
	while (	cin>>n)
	{
		sum=0;
		if (n<=2||n>=100)
			break;
		int a[n];
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if (a[i]>max)
				max=a[i];
			if (a[i]<min)
				min=a[i];
		}	
		c=(sum-max-min)/(n-2.0);
		cout<<fixed<<setprecision(2)<<c<<endl;
	}
	return 0;
}
