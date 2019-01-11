#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x;
	
	y=x/10;
	
	switch(y)
	{
		case 10:
		case 9:
			cout<<"A";break;
		case 8:
			cout<<"B";break;
		case 7:
			cout<<"C";break;
		case 6:
			cout<<"D";break;
		default:
			cout<<"E";
	}
	
	return 0;
}


