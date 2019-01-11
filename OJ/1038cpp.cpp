#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float r,h,PI=3.14;
	float C1,Sa,Sb,Va,Vb;
	scanf("%f%f",&r,&h);
	C1=2.0*PI*r;
	Sa=r*r*PI;
	Sb=r*r*4*PI;
	Va=r*r*r*PI*4.0/3;
	Vb=Sa*h;
	cout<<fixed<<setprecision(2)<<"C1="<<C1<<endl
								<<"Sa="<<Sa<<endl
								<<"Sb="<<Sb<<endl
								<<"Va="<<Va<<endl
								<<"Vb="<<Vb<<endl;
	return 0;
}
	