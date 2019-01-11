#include <iostream>
using namespace std;

int main()
{
	long int a;
	int n=1;
	cin>>a;
	while (a/10!=0)
	{
		n++;
		a=a/10;
	}
	cout<<n<<endl;
	return 0; 
}
