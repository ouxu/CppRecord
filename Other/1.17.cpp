#include <iostream>
using namespace std;

int main ()
{
	cout<<"������һ����,��CTRL+Z��������"<<endl; 
	int a,n=0;
	while (cin>>a)
    {
		if (a<0) 
    		n++;
    }
    cout<<"��������Ϊ"<<n;
    
	return 0;
}
