#include <iostream>
using namespace std;

int date[1000],next[1000];
int i,n,t,len,head,last;

void creat()
{		

	cout<<"������������ĳ���: "; 
	//������������ĳ���
	cin>>n;
	
	cout<<"������������: ";
	//������������
	head=0; 			
	for (i=1;i<=n;i++)		
		cin>>date[i],
		next[i-1]=i;
	len=n;
	last=n;	
}

void show()
{
	cout<<"���ڴ洢������Ϊ��"<<endl;
	
	i=head;
	while (i!=last)
	{
		cout<<date[i+1]<<'\t';
		i=next[i];
	}
	cout<<endl<<"���س����������˵�"<<endl;
	getchar();		
	getchar();
}

void Delete()
{
	cout<<"������Ҫɾ������Ŀ"<<endl; 
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
	cout<<"����Ҫ�����������"<<endl;
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
	;		
	}	
	return 0;
}
