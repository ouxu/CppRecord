#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
	{
		if (n==0)
			break;
		if ((n*n-1)%2==1)
			cout <<"Roliygu"<<endl;
		else 
			cout <<"Yilan"<<endl;		
	}
	return 0;
}
