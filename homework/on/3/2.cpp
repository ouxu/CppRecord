/*
	C++ 上机课 【三】      2016.5.16 
	P271 （3） 
*/
#include <iostream>
#include <string> 
using namespace std;

int main()
{
	cout<<"1.用字符数组，不用strcat函数"<<endl; 

	char s1[100],s2[100];
	cout<<"请输入两行字符串："; 
	gets(s1),gets(s2);
	int i=0,j=0;
	while (s1[i]!='\0')
		i++;
	while (s2[j]!='\0')	
		s1[i++]=s2[j++];
	s1[i]='\0';
	cout<<"合并后的字符串："; 
	cout<<s1;
		string S1="hello",S2=" world!";
	cout<<endl<<endl<<"2.用标准库中的strcat函数"<<endl; 
	cout<<"请输入两行字符串："; 
	gets(s1),gets(s2);
	S1=S1+S2; 
	cout<<"合并后的字符串："; 
	cout<<S1;
	 
	cout<<endl<<endl
		<<"3.用string方法定义字符串变量"<<endl; 
	cout<<"请输入两行字符串："; 
	gets(s1),gets(s2);
	S1=S1+S2; 
	cout<<"合并后的字符串："; 
	cout<<S1;
	return 0;	
} 
