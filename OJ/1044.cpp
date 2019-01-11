#include <iostream>
using namespace std;
int main()
{
	long long int l,j;
	cin>>l;
	if (l<=100000)
		j=l/10;
	else if(l>100000&&l<=200000)
		j=10000+(l-100000)*75/1000;
	else if(l>200000&&l<=400000)
		j=17500+(l-200000)/20;
	else if(l>400000&&l<=600000)
		j=27500+(l-400000)*3/100;
	else if(l>600000&&l<=1000000)
		j=33500+(l-600000)*15/1000;
	else 
		j=39500+(l-1000000)/100;
	cout<<j<<endl; 
	return 0;	
} 
