#include <iostream>
using namespace std;

int main()
{
	cout<<"请输入一组数，按CTRL+Z结束输入"<<endl; 
	int sum=0,v;
	while (cin>>v)
	{
		sum+=v;
	}
	cout<<"和为："<<sum<<endl; 
	
	return 0;
} 
