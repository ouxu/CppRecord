/*
	C++ 上机课 【二】      2016.5.8
	P271 （5） file1 
*/
#include <iostream>
using namespace std;
double a;
double power(double a,double m)
{
	double sum=1;
	for (int i=1;i<=m;i++)
		sum*=a;
	return sum;
}

int main() 
{
	double b=3,c,m,z;
	cout<<"请输入a,m的值：";
	cin>>a>>m;
	c=a*b;
	z=power(a,m);
	cout<<"b="<<b<<"  a*b="<<c
		<<"  a的m次方为："<<z<<endl;
	
	return 0;
}
