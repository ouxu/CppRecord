#include <iostream>
#include <iomanip>
using namespace std;
int f(int n)
{
	if (n==1)
		return 1;
	if (n==2)
		return 2;
	else 
		return f(n-1)+f(n-2);	 
}
int main ()
{
	int N;
	double a,s=0;
	cin>>N;
	for (int i=1;i<=N;i++)
	{
		a=(f(i+1))/(f(i)*1.0);
		s+=a;
	}
	cout<<fixed<<setprecision(2)<<s<<endl;
	//printf("%.2lf",s);
	return 0;
}
