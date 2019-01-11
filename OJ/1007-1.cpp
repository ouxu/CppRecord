#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x,i=0,j=0;
	double s=0;
	for (int n=0;n<20;n++)
	{
		cin>>x;
		
		if (x<0)
			i++;
		if (x>0)
			j++,s+=x;
	}
	
	cout <<i<<endl;
	cout <<fixed<<setprecision(2)<<s/j*1.0<<endl;
	printf("%.2lf",s/j*1.0);
	
	return 0;
}
