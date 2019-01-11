#include <iostream>
using namespace std;
int main ()
{
	cout<<"Please input two number"<<endl; 
	int x,y,s,b;
	cin>>x>>y;
	if (x>y){
		b=x;
		s=y;
	}
	else {
		b=y;
		s=x;
	}
	cout<<"The sum from  "<<s<<"  to  "<<b<<"  is  ";
	int sum=0;
	while (s<=b)
	{sum +=s;
	 s++;}
	cout<<sum<<endl;
	return 0;
}
