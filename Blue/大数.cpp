//计算12345678910987654321+9876543210999999999的结果。

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string a1,b1;						//定义字符串用来存储数值并赋值。
	a1="12345678910987654321";				
	b1="9876543210999999999";
	
	int a[21]={0},b[21]={0};			//定义整形数组并初始化。
		
	a[0]=a1.length();
	b[0]=b1.length();
			
	for (int i=1;i<=a[0];i++)			//将数据倒序存入数组。 
		a[i]=a1[a[0]-i]-'0';
	for (int i=1;i<=b[0];i++)
		b[i]=b1[b[0]-i]-'0';		

	int i;
	
	for (i=1;i<=a[0];i++)				//倒序逐位运算。 
		{
			a[i+1]+=(a[i]+b[i])/10;
			a[i]=(a[i]+b[i])%10;
		}	
	
	cout<<a1<<" + "<<b1<<" = ";			//输出。 
	
	for (i=a[0];i>0;i--)				
		cout<<a[i];
	
	cout<<endl;	
		
	return 0;
}
	


//拓展---小于1000位的计算。
/*
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string a1,b1; 
	while (cin>>a1>>b1) 						//输入。 
	{	
		int a[1001]={0},b[1001]={0};
		
		a[0]=a1.length();
		b[0]=b1.length();
			
		for (int i=1;i<=a[0];i++)				//化为整形倒序存储。 
			a[i]=a1[a[0]-i]-'0';
		for (int i=1;i<=b[0];i++)
			b[i]=b1[b[0]-i]-'0';		

		int i,k;								//找出位数较大的数的位数。 
		k=((a[0]>b[0])?a[0]:b[0]);		
	
		for (i=1;i<=k;i++)						//逐位运算。 
		{
			a[i+1]+=(a[i]+b[i])/10;
			a[i]=(a[i]+b[i])%10;
		}	
	
		if (a[k+1]>0)							//判断是否进位。 
			a[0]=k+1;
		else 
			a[0]=k;
			
		cout<<a1<<" + "<<b1<<" = ";				//输出。 

		for (i=a[0];i>0;i--)
			cout<<a[i];
		cout<<endl;			
	}
	
	return 0;	
}
*/ 

 
