//ʵ������η���
 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a,b,c,d,x1,x2;
	cin>>a>>b>>c;
	
	if (a==0&&b==0) cout<<"�����ɺ���"<<endl;
	else if (a==0&&b!=0)
	      cout <<"X="<<-c/b<<endl;
	else{
			d=pow(b,2)-4*a*c;
			if (d<0)
			cout<<"��ʵ����"<<endl;
	 		else if (d==0)
	  		cout<<"X1=X2="<<-b/(2*a)<<endl;
	    	else 
				cout<<"X1="<<(-b-sqrt(d))/(2*a)<<'\t'
		   	   		<<"X2="<<(-b+sqrt(d))/(2*a)<<endl;  
        	}
	return 0;
}
