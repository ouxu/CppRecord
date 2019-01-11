#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{
	cout<<"请给定两个数："<<endl;
	
	int a,b,j=0;
	cin>>a>>b;
	
	if (a>b)
	{
		int t;
		t=a,a=b,b=t;
	}
	
	for (int i=a;i<=b;)
	{
		cout<<i<<" ";
		i++,j++;
	 	if (j==10) 
	 	{
	 		cout<<endl;j=0;
		}
    }
    
    system("pause");
	return 0;
}
