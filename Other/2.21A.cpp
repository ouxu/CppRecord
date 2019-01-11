#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout<<"请输入底数与指数"<<endl; 
	int x,n;
	int y=1;
	cin>>x>>n;
	
	for (int i=0;i!=n;i++)
	    y *=x;
	
	cout<<x<<" 的 "<<n<<" 次方是 "<<y<<endl;    
	
	system("pause");
	return 0;
}
