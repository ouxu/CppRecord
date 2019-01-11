#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm> 
using namespace std;
//定义全局变量 
int date[101],next[101];  
int i,n,t,len;

void creat()
{		

	cout<<"输入现有链表的长度: "; 
	//输入现有链表的长度
	cin>>n;
	
	cout<<"输入现有链表: ";
	//输入现有链表 			
	for (i=0;i<n;i++)		
		cin>>date[i];

	len=n;	
	sort(date,date+len);
	//初始化数组right 
	for (i=0;i<n;i++)
	{
		if (i!=n-1)
			next[i]=i+1;
		else 
			next[i]=-1;
	}
}

void show()
{
	cout<<"现在存储的链表为："<<endl;
	
	i=0;
	while (i!=-1)
	{
		cout<<date[i]<<'\t';
		i=next[i];
	}
	cout<<endl<<"按回车键返回主菜单"<<endl;
	getchar();		
	getchar();
}

void Delete() 
{
	cout<<"请输入要删除的项目"<<endl; 
	cin>>i;
	
} 

void insert()
{
	len++;
	cout<<"您想要将插入的内容"<<endl;
	cin>>date[len-1];	
	
	if (date[len-1]>date[len-2])
		next[len-2]=len-1,next[len-1]=-1;
	else 
	{
		t=0;
		while (t!=-1)
		{
			if (date[next[t]]>date[len-1])
			{
				next[len-1]=next[t];
				next[t]=len-1; 
				break;
			}	 
			t=next[t];
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
			
	}
		
	return 0; 
} 
