#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,n;
	char a,b,c,d,e;
	cin>>m;
	 a=m%10;m=m/10;
	 b=m%10;m=m/10;
	 c=m%10;m=m/10;
	 d=m%10;m=m/10;
	 e=m%10;m=m/10;
	 n=(((a*10+b)*10+c)*10+d)*10+e;
	 cout<<n<<endl;
	return 0; 
}
