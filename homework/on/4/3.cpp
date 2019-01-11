/*
	C++ 上机课 【四】      2016.5.23
	P272 （5） 
*/

#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

void sortp(char (*s)[6])		//指针 
{
	char temp[6],*t=temp;
	for (int i=0;i<4;i++)
	for (int j=i+1;j<5;j++)
	{
		if (strcmp(s[i],s[j])>0)
		{
			strcpy(t,s[i]);
			strcpy(s[i],s[j]);
			strcpy(s[j],t);
		}	 
	}
	
} 

void sorts(string *s)		//string方法 
{
	string t;
	for (int i=0;i<4;i++)
	for (int j=i+1;j<5;j++)
	{
		if (s[i]>s[j])
		{
			t=s[i];
			s[i]=s[j];
			s[j]=t; 
		}	
		
	}
}

int main()
{
	string s[5],*p=s;
//	char c[5][6];
//	char (*p)[6];
	cout<<"请输入5个字符串:"<<endl; 
	for (int i=0;i<5;i++){
//		cin>>c[i];
		cin>>s[i]; 
	}
//	p=c;
//	sortp(p);
	sorts(p); 
	cout<<"排序后顺序为："<<endl;	
	for (int i=0;i<5;i++){
//		cout<<c[i]<<endl;
		cout<<s[i]<<endl;
	}
			
	
	return 0;
}
