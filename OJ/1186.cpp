#include <iostream>
using namespace std;

int main()
{
	int x,y,s=0;
	cin>>x>>y;
	for (int i=x;i<=y;i++)
	{
		if ((i%3==1)&&(i%5==3))
			s+=i;		
	} 
	cout<<s<<endl;
	
	return 0;
}
