#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		if (n>100||n<0)
			cout<<"Score is error!"<<endl;
		if (n>=0&&n<60)
			cout<<"E"<<endl;
		if (n>=60&&n<70)
			cout<<"D"<<endl;
		if (n>=70&&n<80)
			cout<<"C"<<endl;		
		if (n>=80&&n<90)
			cout<<"B"<<endl;		
		if (n>=90&&n<=100)
			cout<<"A"<<endl;
	}
	return 0;
}
