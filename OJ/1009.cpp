#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int m=0,n=0,i=0,j=0;
	char x;
	while (x=getchar())
	 	{
		 	if (x=='\n')
	   			break;
	   		else
			   {
	 				if ((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
        				m++;
     				else 
					 	{
     						if (x==' ') n++;
     						else 
								{
     								if (x>='0'&&x<='9') i++;
     								else j++;
		 						}
 						}
		 		}	
	 	}  
	cout<<m<<endl<<n<<endl<<i<<endl<<j<<endl;
	return 0;
}
