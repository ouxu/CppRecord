#include <iostream>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
	{
    	for(char c=65;c<65+m;c++)
        	cout<<c;
        
       	cout<<endl;
    
		int a=n-1;
    	while(a--)
		{
        	for(char c=65+(n-a)-1;c>65;c--)
            	cout<<c;
      	 	for(char c=65;c<=65+(m-(n-a));c++)
            	cout<<c;
        	cout<<endl;
        }
    }
    return 0;
}

 
