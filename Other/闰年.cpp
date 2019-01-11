//判断闰年
 
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	if( (n%4==0)&&(n%100!=0)||n%400==0   )
	cout<<"闰年0"<<endl;
	else
	cout<<"平年"<<endl; 
	
	return 0;
}
