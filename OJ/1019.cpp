#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin>>n)
		{
			if(n==-1||n>100000)
				break;
			if(n==0)
				cout<<"1"<<endl;
			else 
			{
				cout<<"5";
				for (int i=1;i<n;i++)	
				cout<<"0";
				cout<<"5";
				for (int i=1;i<n;i++)	
				cout<<"0";
				cout<<endl;
			}
		}
	return 0;
}
