#include <iostream>
using namespace std;

int main()
{
	cout<<"������������"<<endl;
	int x,y,s,b;
	cin>>x>>y;
	
	if(x>y)
		b=x,s=y;  
	else
		b=y,s=x;
		
	cout<<s<<"��"<<b<<"֮�����Ϊ��"<<endl; 
	while (s<=b)
		cout<<s<<"  ",s++;
		
	return 0;
}
