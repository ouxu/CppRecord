#include <iostream>
#include <cstring>
#include <cstdlib>
#include <algorithm> 
using namespace std;
//����ȫ�ֱ��� 
int date[101],next[101];  
int i,n,t,len;

void creat()
{		

	cout<<"������������ĳ���: "; 
	//������������ĳ���
	cin>>n;
	
	cout<<"������������: ";
	//������������ 			
	for (i=0;i<n;i++)		
		cin>>date[i];

	len=n;	
	sort(date,date+len);
	//��ʼ������right 
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
	cout<<"���ڴ洢������Ϊ��"<<endl;
	
	i=0;
	while (i!=-1)
	{
		cout<<date[i]<<'\t';
		i=next[i];
	}
	cout<<endl<<"���س����������˵�"<<endl;
	getchar();		
	getchar();
}

void Delete() 
{
	cout<<"������Ҫɾ������Ŀ"<<endl; 
	cin>>i;
	
} 

void insert()
{
	len++;
	cout<<"����Ҫ�����������"<<endl;
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
			
	}
		
	return 0; 
} 
