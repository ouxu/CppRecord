/*
	C++ 第二次作业 		P156-13
	编写一程序，将两个字符串连接起来，结果取代第一个字符串。
  	(1) 用字符数组，不用stract函数；  
	(2) 用标准库中的stract函数； 		
	(3) 用string方法定义字符串变量。 
*/

#include <iostream>
#include <string> 
using namespace std;

int main()
{
	cout<<"用string方法定义字符串变量"<<endl; 
	string S1="hello",S2=" world!";
	cout<<"当前字符串："<<endl; 
	cout<<S1<<endl<<S2<<endl;
	S1=S1+S2;
	cout<<"合并后的字符串："<<endl; 
	cout<<S1;
	 
	return 0;	
} 
