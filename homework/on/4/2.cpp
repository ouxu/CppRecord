/*
	C++ 上机课 【四】      2016.5.23
	P272 （4） 
*/

#include <iostream>
using namespace std;

int main()
{
	const int N=50;
	int num[N]={0};
	int i,j,k,m,n;
	int *p;
	cout<<"请输入总人数："<<endl;
	cin>>n;
	p=num; 
	
	for (i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;	//i为每次循环时计数变量 
	k=0;	//k为按1 2 3报数时的计数变量
	m=0;	//m为退出人数 
	
	while(m<n-1){
		if(*(p+i)!=0)
			k++;
			
		if (k==3){
			*(p+i)=0;
			k=0;
			m++;
		}
		i++;	
		if (i==n)
			i=0;
	}
	
	while(*p==0)
		p++;
	
	cout<<"最后一个是："<<*p<<" 号"<<endl; 
	return 0;
}
