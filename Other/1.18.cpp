#include <iostream>
using namespace std;

int main()
{
	cout<<"请输入两个数"<<endl;
	int x,y,s,b;
	cin>>x>>y;
	
	if(x>y)
		b=x,s=y;  
	else
		b=y,s=x;
		
	cout<<s<<"到"<<b<<"之间的数为："<<endl; 
	while (s<=b)
		cout<<s<<"  ",s++;
		
	return 0;
}
