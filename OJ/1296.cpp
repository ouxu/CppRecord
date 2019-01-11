#include <iostream>
using namespace std;

int main()
{
	float c;
	int n;
	cin>>n;
	
	if (n*95<=300)
		c=n*95;
	else 
		c=n*95*0.85;
	
	printf("%.2f",c);

	return 0; 
}
