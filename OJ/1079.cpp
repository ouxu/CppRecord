#include <iostream>
using namespace std;
    
int main()
{   
	void input(int a[10]);	
	void deal(int a[10]);
	void output(int a[10]);
	
	int a[10];
	input(a);
	deal(a);
	output(a);
	
	return 0; 
}    
    
void input(int a[10])
{   
	for (int i=0;i<10;i++)
		cin>>a[i];
}   
void deal(int a[10])
{   
	int i,max=0,min=1000,ma,mi;
	for (i=0;i<10;i++)
	{
		if (a[i]<min)
		{
			mi=i;
			min=a[i];	
		} 
		if (a[i]>max)
		{
			ma=i;
			max=a[i];	
		} 
	}
	int t;
	t=a[0];
	a[0]=a[mi];
	a[mi]=t;
	
	t=a[9];
	a[9]=a[ma];
	a[ma]=t;
}    
void output(int a[10])
{   
	for (int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}   
    
	
