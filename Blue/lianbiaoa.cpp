#include <iostream>
using namespace std;

int date[1000],next[1000];
int i,n,t,len,head,last;

void creat()
{		

	cout<<"输入现有链表的长度: "; 
	//输入现有链表的长度
	cin>>n;
	
	cout<<"输入现有链表: ";
	//输入现有链表
	head=0; 			
	for (i=1;i<=n;i++)		
		cin>>date[i],
		next[i-1]=i;
	len=n;
	last=n;	
}

void show()
{
	cout<<"现在存储的链表为："<<endl;
	
	i=head;
	while (i!=last)
	{
		cout<<date[i+1]<<'\t';
		i=next[i];
	}
	cout<<endl<<"按回车键返回主菜单"<<endl;
	getchar();		
	getchar();
}

void Delete()
{
	cout<<"请输入要删除的项目"<<endl; 
	cin>>t;
	if (date[1]==t)
		{
			next[0]=1;
			head=1;
			return;
		}
		
	else
	{
		i=0; 
		while (1!=n)
		{
			if (date[i+1]==t&&head==0)
			{
				next[i-1]=i+1;
				return;
			}
			if (date[i+1]==t&&head!=0&&head==i)
			{
				head=i+1;
				return;
			}
		i=next[i];
		}
	}
}

void insert()
{
	last++;
	len++;
	cout<<"您想要将插入的内容"<<endl;
	cin>>date[len];	
	
	for (i=0;i<last-1;i++)
	{
		if (date[len]==date[i])
		{
			next[i-1]=i;
			next[i-2]=i-1;
			return;
			}	
	}
	
	if (date[len]>date[len-1])
	{
		next[len-1]=len,next[len]=last;
		return;
	}	
	else 
	{
		i=0;
		while (i!=last)
		{
			if (date[next[i]]>date[len])
			{
				next[len-1]=next[i];
				next[next[i]-1]=len-1; 
				return;
			}	 
			i=next[i];
		} 
	}	
}

int main()
{
	char c;
	while (1)
	{
	//	system("cls");
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
	;		
	}	
	return 0;
}
