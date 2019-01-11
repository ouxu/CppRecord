#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b,c;
	double avg;
	cin>>a>>b>>c;
	//scanf("%d %d %d",&a,&b,&c);
	avg=(a+b+c)/3.0;
	cout<<fixed<<setprecision(3)<<avg<<endl;
	//printf("%.3lf",avg);
	return 0;	
}
