#include<iostream>
using namespace std;

int main()
{   
   	char c;
	int letters=0,space=0,degit=0,other=0;//���廯������������ڱ�����ʱ���㴦��
	while((c=getline(cin,c)))//�������в�ֹͣ���� Ҳ����ʹ��getline(cin��c)
	{
		if(c>='a'&&c<='z'||c>'A'&&c<='Z')//�ж��Ƿ�Ϊ��ĸ
			letters++;
		else if(c==' ')//�ж��Ƿ�Ϊ�ո�
			space++;
		else if(c>='0'&&c<='9')//�ж��Ƿ�Ϊ����
			degit++;
		else
			other++;//�����ַ�
	}
	
	cout<<letters<<" "<<space<<" "<<degit" "<<other;
    
	return 0;
}
