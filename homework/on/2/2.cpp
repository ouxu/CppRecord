/*
	C++ ÉÏ»ú¿Î ¡¾¶þ¡¿      2016.5.8
	P270 £¨3£©
*/

#include <iostream>
using namespace std;

void move(char x,char y)
{
	cout<<x<<"-->"<<y<<endl;
}
void hanoi(int n,char one,char two,char three)
{
	if (n==1)
		move (one,three);
	else 
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}

int main()
{
	int n;
	cin>>n;
	hanoi(n,'A','B','C');
	
	return 0;
	
}
