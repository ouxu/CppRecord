#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class line
{
	public:
		int num;
		int cont; 
		line *next; 
};

line *head=NULL;

line *creat()
{
	line *p1,*p2;
	p1=new line;
	head=p1;
	p2=p1;
	cout<<"�������ţ���0���� ��";
	cin>>p1->num;
	
	if (p1->num!=0)
	{
		cout<<"���������ݣ�";
		cin>>p1->cont; 
	}
	else 
	{
		delete p1;
		p2=NULL;
		head=NULL;
		return head;
	}
	
	while (p1->num!=0)
	{
		p2=p1;
		p1=new line;
		cout<<"�������ţ���0���� ��";
		cin>>p1->num;
	
		if (p1->num!=0)
		{
			cout<<"������Ҫ�洢������ ��";
			cin>>p1->cont; 
		}
		
		p2->next=p1; 
	}
}

void Delete(line *head,int num)
{
	line *t;
	if (head->num=num)
	{
		t=head;
		head=head->next;
		::head=head;
		delete t;
		cout<<"�����ɹ���"<<endl;
		return; 
	}
	while (head)
	{
		if (head->next==NULL)
		{
			cout<<"�Ҳ���Ҫɾ���ı�ţ���"<<endl; 
			return;	
		}	
		
		if (head->next->num==num)
		{
			t=head->next;
			head->next=t->next;
			delete t;
			cout<<"�����ɹ���"<<endl;
			return;
		}
		head=head->next;	
	}
	cout<<"�Ҳ���Ҫɾ���ı��"<<endl; 
}

void show(line *head)
{
	cout<<endl;
	cout<<"����Ϣ���£�"<<endl;
	while (head)
	{
		cout<<"��� :"<<head->num<<'\t';
		cout<<"���� :"<<head->cont<<endl;
		head=head->next;	
	}	
	getchar();
	getchar();
}
int main()
{
	begin:
		cout<<"1-�ؽ����� 2-��ʾ���� 3-�������� 4-ɾ������ 5-��Ŀ���� Q-�˳�" <<endl; 
	
	char c;	
	cin>>c;
	
	if (c=='1')
	{
		::head=creat();
		system("cls");
		goto begin;
	}
	if (c=='2')
	{
		show(head);
	}
	
	return 0;
}
