/*
	C++ �ϻ��� ���ġ�      2016.5.23
	P272 ��4�� 
*/

#include <iostream>
using namespace std;

int main()
{
	const int N=50;
	int num[N]={0};
	int i,j,k,m,n;
	int *p;
	cout<<"��������������"<<endl;
	cin>>n;
	p=num; 
	
	for (i=0;i<n;i++)
		*(p+i)=i+1;
	i=0;	//iΪÿ��ѭ��ʱ�������� 
	k=0;	//kΪ��1 2 3����ʱ�ļ�������
	m=0;	//mΪ�˳����� 
	
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
	
	cout<<"���һ���ǣ�"<<*p<<" ��"<<endl; 
	return 0;
}
