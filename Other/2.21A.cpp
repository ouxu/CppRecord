#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	cout<<"�����������ָ��"<<endl; 
	int x,n;
	int y=1;
	cin>>x>>n;
	
	for (int i=0;i!=n;i++)
	    y *=x;
	
	cout<<x<<" �� "<<n<<" �η��� "<<y<<endl;    
	
	system("pause");
	return 0;
}
