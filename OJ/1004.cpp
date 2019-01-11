#include <iostream>
using namespace std;

int main()
{
	int a,b,n;
    while (cin>>n)
    	{
     		if (n==0)
         		break;
      		else 
	  			{
				  	b=0;
	  			  	for(int i=0;i<n;i++)
	  					{
	  						cin>>a;
      						b=b+a;
						}
      				cout<<b<<endl;
      			}				
     	}
     	
	return 0;
}
