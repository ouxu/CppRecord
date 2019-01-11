#include <iostream>
using namespace std;

int main()
{
	int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
	int i;
	
	head=1;
	tail=10;
	while (head<tail)     //
	{
		tail++;
		cout<<q[head];
		q[tail]=q[head+1];
		head+=2;
	}
	
	return 0;
}
