#include <iostream>
using namespace std;

struct queue
{
	int date[100];
	int head;
	int tail;
};

int main()
{
	struct queue q;
	int i;
	q.head=1;
	q.tail=1;
	for (i=1;i<=9;i++)
	{
		cin>>q.date[q.tail];
		q.tail++;
	}
	
	while (q.head<q.tail)
	{
		cout<<q.date[q.head];
		q.head++;
		q.date[q.tail]=q.date[q.head];
		q.tail++;
		q.head++;	
	}
	
	return 0;
}
