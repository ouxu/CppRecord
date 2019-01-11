#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int value=2,pow=10,result=1;
	
	for(int cnt=0;cnt!=pow;++cnt)
	    result*=value;
	    	
	cout<<value<<" raised to the power of "	    
    	<<pow<<":\t"<<result<<endl;
    
	system("pause");
	return 0;
} 
