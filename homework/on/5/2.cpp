/*
	C++ 上机课 【五】      2016.5.30
	P273 （4） 链表的基本操作 
*/

#include <iostream>
using namespace std;

struct node
{
	int id;
	int num;
	node *next;
};
int n;

int main()
{
	node *creat();
	node *del(node *, int);
	node *insert(node *, node *);
	void print(node *);

	node *head, *p;

	cout << "input record:" << endl;
	head = creat();
	print(head);

	int del_id;
	cout << endl << "input the delete id:";
	cin >> del_id;
	while (del_id != 0) {
		head = del(head, del_id);
		print(head);
		cout << "input the delete id:";
		cin >> del_id;
	}

	cout << endl << "input the insert id and insert number:";
	p = new node;
	cin >> p->id >> p->num;
	while (p->id != 0) {
		head = insert(head, p);
		print(head);
		cout << endl << "input the insert id:";
		p = new node;
		cin >> p->id >> p->num;
	}

	return 0;
}

void print(node *head)
{
	node *p1;
	cout << "Now,These " << n << " record are:" << endl;
	p1 = head;
	if (head != NULL) {
		do {
			cout << p1->id << " " << p1->num << endl;
			p1 = p1->next;
		} while (p1 != NULL);
	}
}

node *creat()
{
	node *head;
	node *p1, *p2;
	n = 0;
	p1 = p2 = new node;
	cin >> p1->id >> p1->num;
	head = NULL;
	while (p1->id != 0) {
		n++;
		if (n == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = new node;
		cin >> p1->id >> p1->num;
	}
	p2->next = NULL;

	return (head);
}

node *del(node *head, int id)
{
	node *p1, *p2;
	if (head == NULL) {
		cout << "List is NULL" << endl;
		return (head);
	}
	p1 = head;
	while (id != p1->id && p1->next != NULL) {
		p2 = p1;
		p1 = p1->next;
	}
	if (id == p1->id) {
		if (p1 == head)
			head = p1->next;
		else
			p2->next = p1->next;
		cout << "detele:" << id << endl;
		n--;
	}
	else
		cout << "can not find" << endl;

	return (head);
}

node *insert(node *head, node *p)
{
	node *p0, *p1, *p2;
	p1 = head;
	p0 = p;
	if (head == NULL) {
		head = p; p0->next = NULL;
	}
	else {
		while ((p0->id > p1->id) && (p1->next != NULL)) {
			p2 = p1;
			p1 = p1->next;
		}
		if (p0->num <= p1->num) {
			if (head == p1)
				head = p0;
			else
				p2->next = p0;
			p->next = p1;
		}
		else {
			p1->next = p0;
			p0->next = NULL;
		}
	}
	n++;
	return (head);
}


