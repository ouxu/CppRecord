/*
	C++ �ϻ��� ������      2016.5.16 
	P271 ��3�� 
*/
#include <iostream>
#include <string> 
using namespace std;

int main()
{
	cout<<"1.���ַ����飬����strcat����"<<endl; 

	char s1[100],s2[100];
	cout<<"�����������ַ�����"; 
	gets(s1),gets(s2);
	int i=0,j=0;
	while (s1[i]!='\0')
		i++;
	while (s2[j]!='\0')	
		s1[i++]=s2[j++];
	s1[i]='\0';
	cout<<"�ϲ�����ַ�����"; 
	cout<<s1;
		string S1="hello",S2=" world!";
	cout<<endl<<endl<<"2.�ñ�׼���е�strcat����"<<endl; 
	cout<<"�����������ַ�����"; 
	gets(s1),gets(s2);
	S1=S1+S2; 
	cout<<"�ϲ�����ַ�����"; 
	cout<<S1;
	 
	cout<<endl<<endl
		<<"3.��string���������ַ�������"<<endl; 
	cout<<"�����������ַ�����"; 
	gets(s1),gets(s2);
	S1=S1+S2; 
	cout<<"�ϲ�����ַ�����"; 
	cout<<S1;
	return 0;	
} 
