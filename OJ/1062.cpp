#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void res(double a,double b,double c)
{
	double det;
	det=b*b-4*a*c;
	
	if (a==0)
	{
		if (b==0)
		   cout<<"wrong";
		cout<<"x="<<-c/b;
	}
	
	if 	(det>=0)
		cout<<fixed<<setprecision(3)
			<<"x1="<<(-b+sqrt(det))/(2*a)<<" "<<"x2="<<(-b-sqrt(det))/(2*a)<<endl;
	else 
		cout<<fixed<<setprecision(3)
			<<"x1="<<(-b)/(2*a)<<"+"<<sqrt(-det)/(2*a)<<"i "
			<<"x2="<<(-b)/(2*a)<<"-"<<sqrt(-det)/(2*a)<<"i"<<endl; 
}

int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	res(a,b,c);
	
	return 0;
}
