#include<iostream>
using namespace std;

int main()
{   
   	char c;
	int letters=0,space=0,degit=0,other=0;//语义化定义变量可以在变量多时方便处理
	while((c=getline(cin,c)))//遇到换行才停止输入 也可以使用getline(cin，c)
	{
		if(c>='a'&&c<='z'||c>'A'&&c<='Z')//判断是否为字母
			letters++;
		else if(c==' ')//判断是否为空格
			space++;
		else if(c>='0'&&c<='9')//判断是否为数字
			degit++;
		else
			other++;//其他字符
	}
	
	cout<<letters<<" "<<space<<" "<<degit" "<<other;
    
	return 0;
}
