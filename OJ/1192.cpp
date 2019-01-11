#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x1,y1,x2,y2;
	double s;
	while (cin>>x1>>y1>>x2>>y2)
	{
		s=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		printf("%.2lf\n",s);
	}
	
	
	return 0;
}
