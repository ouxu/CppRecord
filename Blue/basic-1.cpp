#include <iostream>
using namespace std;

bool run(int n)
{
	if ( n%4==0 && n%100!=0)
		return true;
	if ( n%400==0)
		return true;
	else 
		return false;	
}

int main()
{
	int n;
	cin>>n;
	
	if (run(n))
		cout<<"yes";
	else 
		cout<<"no";	 
	
	return 0;
}
