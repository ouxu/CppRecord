//三角形面积
 
#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main()
{
	double a,b,c,s,x;
	
	cin>>a>>b>>c;
	x=(a+b+c)/2;
	s=sqrt(x*(x-a)*(x-b)*(x-c));
	cout<<fixed<<setprecision(2)<<s<<endl;
	
	return 0;
 } 
