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
	cout<<"请输入编号，按0结束 ：";
	cin>>p1->num;
	
	if (p1->num!=0)
	{
		cout<<"请输入内容：";
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
		cout<<"请输入编号，按0结束 ：";
		cin>>p1->num;
	
		if (p1->num!=0)
		{
			cout<<"请输入要存储的内容 ：";
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
		cout<<"操作成功！"<<endl;
		return; 
	}
	while (head)
	{
		if (head->next==NULL)
		{
			cout<<"找不到要删除的编号！！"<<endl; 
			return;	
		}	
		
		if (head->next->num==num)
		{
			t=head->next;
			head->next=t->next;
			delete t;
			cout<<"操作成功！"<<endl;
			return;
		}
		head=head->next;	
	}
	cout<<"找不到要删除的编号"<<endl; 
}

void show(line *head)
{
	cout<<endl;
	cout<<"表单信息如下："<<endl;
	while (head)
	{
		cout<<"编号 :"<<head->num<<'\t';
		cout<<"内容 :"<<head->cont<<endl;
		head=head->next;	
	}	
	getchar();
	getchar();
}
int main()
{
	begin:
		cout<<"1-重建链表 2-显示链表 3-插入链表 4-删除链表 5-项目总数 Q-退出" <<endl; 
	
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
