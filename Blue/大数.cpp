//����12345678910987654321+9876543210999999999�Ľ����

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string a1,b1;						//�����ַ��������洢��ֵ����ֵ��
	a1="12345678910987654321";				
	b1="9876543210999999999";
	
	int a[21]={0},b[21]={0};			//�����������鲢��ʼ����
		
	a[0]=a1.length();
	b[0]=b1.length();
			
	for (int i=1;i<=a[0];i++)			//�����ݵ���������顣 
		a[i]=a1[a[0]-i]-'0';
	for (int i=1;i<=b[0];i++)
		b[i]=b1[b[0]-i]-'0';		

	int i;
	
	for (i=1;i<=a[0];i++)				//������λ���㡣 
		{
			a[i+1]+=(a[i]+b[i])/10;
			a[i]=(a[i]+b[i])%10;
		}	
	
	cout<<a1<<" + "<<b1<<" = ";			//����� 
	
	for (i=a[0];i>0;i--)				
		cout<<a[i];
	
	cout<<endl;	
		
	return 0;
}
	


//��չ---С��1000λ�ļ��㡣
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string a1,b1; 
	while (cin>>a1>>b1) 						//���롣 
	{	
		int a[1001]={0},b[1001]={0};
		
		a[0]=a1.length();
		b[0]=b1.length();
			
		for (int i=1;i<=a[0];i++)				//��Ϊ���ε���洢�� 
			a[i]=a1[a[0]-i]-'0';
		for (int i=1;i<=b[0];i++)
			b[i]=b1[b[0]-i]-'0';		

		int i,k;								//�ҳ�λ���ϴ������λ���� 
		k=((a[0]>b[0])?a[0]:b[0]);		
	
		for (i=1;i<=k;i++)						//��λ���㡣 
		{
			a[i+1]+=(a[i]+b[i])/10;
			a[i]=(a[i]+b[i])%10;
		}	
	
		if (a[k+1]>0)							//�ж��Ƿ��λ�� 
			a[0]=k+1;
		else 
			a[0]=k;
			
		cout<<a1<<" + "<<b1<<" = ";				//����� 

		for (i=a[0];i>0;i--)
			cout<<a[i];
		cout<<endl;			
	}
	
	return 0;	
}
*/ 

 
