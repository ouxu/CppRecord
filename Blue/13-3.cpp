/*
	C++ �ڶ�����ҵ 		P156-13
	��дһ���򣬽������ַ����������������ȡ����һ���ַ�����
  	(1) ���ַ����飬����stract������  
	(2) �ñ�׼���е�stract������ 		
	(3) ��string���������ַ��������� 
*/

#include <iostream>
#include <string> 
using namespace std;

int main()
{
	cout<<"��string���������ַ�������"<<endl; 
	string S1="hello",S2=" world!";
	cout<<"��ǰ�ַ�����"<<endl; 
	cout<<S1<<endl<<S2<<endl;
	S1=S1+S2;
	cout<<"�ϲ�����ַ�����"<<endl; 
	cout<<S1;
	 
	return 0;	
} 
