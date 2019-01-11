#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	int a,n=0,m=0;
	float p,b=0;
	for (int i=0;i<20;i++)
		{
			cin>>a;
			if(a<0)
		  	 	n++;
	    	else
	     		{
		 		 if (a>0)
	       			{b+=a;m++;}
		   		}	 
		}
	p=b/m;
	cout<<n<<endl;
	cout<<fixed<<setprecision(2)<<p<<endl;	 
	return 0;
}
