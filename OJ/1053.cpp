#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	double m,s;
	cin>>m>>n;
	s=-m/2;
	for (int i=0;i<n;i++)
		 s+=m,m/=2.0;
	cout<<fixed<<setprecision(2)<<m<<" "<<s*2<<endl;
	//printf("%.2lf %.2lf",m,s*2);
	return 0;
}
