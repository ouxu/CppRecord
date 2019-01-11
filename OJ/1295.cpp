#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1,y1,x2,y2,c;
	cin>>x1>>y1>>x2>>y2;
	
	c=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	
	printf("%.0f",c);

	return 0; 
}
