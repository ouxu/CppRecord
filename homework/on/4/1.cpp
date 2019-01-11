/*
	C++ 上机课 【四】      2016.5.23
	P272 （1）（3） 
*/

#include <iostream>
using namespace std;

//指针变量 
void swap(int *p1,int *p2)
{
	int p=*p1;
	*p1=*p2;
	*p2=p;	
}

//引用变量
void Swap(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
} 


int main()
{
	int a[3];
	cin>>a[0]>>a[1]>>a[2];
/*
	int *p1,*p2,*p3;
	p1=&a[0],p2=&a[1],p3=&a[2];
	if (a[0]>a[1])	swap(p1,p2);
	if (a[0]>a[2])	swap(p1,p3);
	if (a[1]>a[2])	swap(p2,p3);
	
*/
	if (a[0]>a[1])	Swap(a[0],a[1]);
	if (a[0]>a[2])	Swap(a[0],a[2]);
	if (a[1]>a[2])	Swap(a[1],a[2]);
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	return 0;
}
