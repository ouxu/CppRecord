#include <iostream>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0;i<10;i++)
		cin>>a[i];
	for (i=0;i<9;i++)
		cout<<a[10-i-1]<<" ";
	cout<<a[0]<<endl;
	return 0;
}
