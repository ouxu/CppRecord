#include <iostream>
using namespace std;
int main()
{
	for (int i=10;i<=1000;i++)
		{
	 		if  (i%2==0&&i%3==0&&i%7==0)
	    		{
					cout<<i<<endl;
	     			i++;
				}
		}
	return 0;
}
