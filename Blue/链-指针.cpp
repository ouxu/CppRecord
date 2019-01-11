///////////////////////////////////////
//实现元素的指定位置插入，指定位置删除
//返回长度，遍历，返回指定位置的元素
///////////////////////////////////////
#include <iostream>
using namespace std;

struct node												//定义链表节点结构体 
{
	int num;
	node *next;
}; 

node *head=NULL;										//定义头节点 
int n=0;

void creat()											//创建链表函数 
{
	node *p1,*p2;		
	p1=p2=new node;
	cout<<"请输入数字，以0结束。"<<endl; 
	cin>>p1->num;
	head=NULL; 
	while (p1->num!=0)
	{
		if (n==0)
			head=p1;
		else 
			p2->next=p1;
			
		p2=p1;
		p1=new node;
		cin>>p1->num;
		n++;
	}
	p1->next=NULL;
}

void sum()												//计数函数 
{
	node *p=head;
	int count=1;
	
	while (p->next)
	{
		count++;
		p=p->next; 
	}
		
	cout<<"当前总数目为： "<<count<<endl;
	getchar();
	getchar(); 

}
void show()												//遍历显示函数 
{
	node *p=head;
	while (p)
	{
		cout<<p->num<<"  ";
		p=p->next; 
	}
	cout<<endl;
	cout<<"按回车键返回。"; 
	getchar();
	getchar();
}

void insert()											//插入函数 
{
	int num;
	cout<<"请输入需要插入的数字：";
	cin>>num;
	
	node *p0,*p1,*p2;
	p1=head;
	p0=new node;
	p0->num=num;
	
	if (head==NULL)
	{
		head=p0;
		p0->next=NULL;
	}
	
	while (p1->num<p0->num&&p1->next)
	{
		p2=p1;
		p1=p1->next;			
	}  
	if (p1->num>=p0->num)
	{
		if (p1==head)
		 	head=p0;
		else
			p2->next=p0;
		
		p0->next=p1;
	}
	else 
	{
		p1->next=p0;
		p0->next=NULL;
	}
	cout<<endl<<"操作成功，按回车键返回。";
	getchar();
	getchar();
}
	
void Delete()										//删除函数						
{
	if (head==NULL)
		cout<<"链表为空！！"<<endl; 
	else 
	{
		int num;
		cout<<"请输入需要删除的数字："<<endl;
		cin>>num;
		
		node *p1,*p2;
		p1=head;
		
		while (p1->num!=num&&p1->next)	
		{
			p2=p1;
			p1=p1->next;
		}
		
		if (p1->num==num)
		{
			if (p1==head)		
			{
				head=p1->next;
			}
			else 
			{
				p2->next=p1->next;
			}
		}
		else 
			cout<<"未找到对应数字"<<endl; 
	}	
	cout<<endl<<"操作成功，按回车键返回。";
	getchar();
	getchar();
}
  
int main()			
{
	char c;
	while (1)
	{
		system("cls");									//系统清屏指令 
		cout<<"1-录入链表 2-显示链表 3-删除链表 4-插入链表 5-项目总数 Q-退出程序"<<endl;
		cin>>c;
		if (c=='1')
			creat();		
		if (c=='2')
			show();		
		if (c=='3')
			Delete();
		if (c=='4')
			insert();
		if (c=='5')
			sum();
		if (c=='q'||c=='Q')
			break;	
	}
	
	return 0;
}
