///////////////////////////////////////
//ʵ��Ԫ�ص�ָ��λ�ò��룬ָ��λ��ɾ��
//���س��ȣ�����������ָ��λ�õ�Ԫ��
///////////////////////////////////////
#include <iostream>
using namespace std;

struct node												//��������ڵ�ṹ�� 
{
	int num;
	node *next;
}; 

node *head=NULL;										//����ͷ�ڵ� 
int n=0;

void creat()											//���������� 
{
	node *p1,*p2;		
	p1=p2=new node;
	cout<<"���������֣���0������"<<endl; 
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

void sum()												//�������� 
{
	node *p=head;
	int count=1;
	
	while (p->next)
	{
		count++;
		p=p->next; 
	}
		
	cout<<"��ǰ����ĿΪ�� "<<count<<endl;
	getchar();
	getchar(); 

}
void show()												//������ʾ���� 
{
	node *p=head;
	while (p)
	{
		cout<<p->num<<"  ";
		p=p->next; 
	}
	cout<<endl;
	cout<<"���س������ء�"; 
	getchar();
	getchar();
}

void insert()											//���뺯�� 
{
	int num;
	cout<<"��������Ҫ��������֣�";
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
	cout<<endl<<"�����ɹ������س������ء�";
	getchar();
	getchar();
}
	
void Delete()										//ɾ������						
{
	if (head==NULL)
		cout<<"����Ϊ�գ���"<<endl; 
	else 
	{
		int num;
		cout<<"��������Ҫɾ�������֣�"<<endl;
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
			cout<<"δ�ҵ���Ӧ����"<<endl; 
	}	
	cout<<endl<<"�����ɹ������س������ء�";
	getchar();
	getchar();
}
  
int main()			
{
	char c;
	while (1)
	{
		system("cls");									//ϵͳ����ָ�� 
		cout<<"1-¼������ 2-��ʾ���� 3-ɾ������ 4-�������� 5-��Ŀ���� Q-�˳�����"<<endl;
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
