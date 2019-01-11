#include <iostream>
using namespace std;
int main()
{
	int max,x;
	while (1)
	{
		cin>>x;
		if (x==0)
			break;
		max=x;
		while (x!=0)
		{
			(x>max)?(max=x):(max=max);
			cin>>x;	
		} 		
		cout<<max<<endl;	
	}
	return 0;
} 

