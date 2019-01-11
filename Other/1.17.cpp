#include <iostream>
using namespace std;

int main ()
{
	cout<<"请输入一组数,按CTRL+Z结束输入"<<endl; 
	int a,n=0;
	while (cin>>a)
    {
		if (a<0) 
    		n++;
    }
    cout<<"负数个数为"<<n;
    
	return 0;
}
