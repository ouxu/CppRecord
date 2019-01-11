#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c;
	long long int s1=0,s2=0;
	double s3=0,S;
	cin>>a>>b>>c;
	for (int i=1;i<=a;i++)
		s1+=i;
	for (int i=1;i<=b;i++)
		s2+=i*i;
	for (int i=1;i<=c;i++)
		s3+=1.0/i;
	S=s1+s2+s3;
	cout<<fixed<<setprecision(2)<<S<<endl;
	//printf("%.2lf",S);
	return 0;
}
