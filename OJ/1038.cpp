#include <iostream>
using namespace std;
int main()
{
	double r,h,PI=3.14;
	double C1,Sa,Sb,Va,Vb;
	cin>>r>>h;
	C1=int(2*PI*r*100);
	Sa=(r*r*PI);
	Sb=int(r*r*4*PI*100);
	Va=int(r*r*r*PI*4.0/3*100);
	Vb=int(Sa*h*100);
	Sa=int(100*Sa);
	cout<<"C1="<<C1/100<<endl
		<<"Sa="<<Sa/100<<endl
		<<"Sb="<<Sb/100<<endl
		<<"Va="<<Va/100<<endl
		<<"Vb="<<Vb/100<<endl;
	return 0;
}
