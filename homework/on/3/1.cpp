/*
	C++ �ϻ��� ������      2016.5.16 
	P271 ��1����2�� 
*/
#include <iostream>
using namespace std;

void  mpsort(int a[],int n)   //ð������
{
	for (int i = 0; i < n-1; i++)
	for (int j = 0; j < n-1-i; j++)
		if (a[j] > a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1]=t;
			}
}

void xzsort(int a[],int n)	//ѡ������ 
{
	for (int i = 0; i < n-1; i++)
	for (int j = i+1; j < n; j++)
	{
		if (a[i] > a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j]=t;
			}
	}
}

int search(int a[],int n,int m,int key)
{
	if (n > m)	return -1;
	int i = (n+m)/2;
	if (a[i] == key)	
		return i;	 
	if (a[i] > key)
		return search(a,n,i-1,key);
	return search(a,i+1,m,key);
}
 
int main()
{
	int a[10];
	cout<<"������10��������"<<endl;
	
	for (int i = 0; i < 10; i++)
		cin>>a[i];
//	mpsort(a,10);
	xzsort(a,10);
	for (int i = 0; i < 10; i++)
		cout<<a[i]<<" ";
	int key;
	cout<<endl<<"������Ҫ���ҵ�����";
	cin>>key;
	int map;
	
	if ((map=search(a,0,10,key))>=0)
		cout<<"�����������е�"<<map+1<<"��Ԫ��"<<endl;
	else 
		cout<<"�޴���"<<endl; 
	return 0;
}	
