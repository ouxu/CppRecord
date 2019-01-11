#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[101],s[101];
	int i,next,top;
	
	cin>>a;
	int len=strlen(a);	
	int mid=len/2-1;
	
	top=0;
	
	for (i=0;i<mid;i++)
		s[++top]=a[i]; 
	
	if (len%2==0)
		next=mid+1;
	else 
		next=mid+2;
		
	for (i=next;i<len;i++)	
	{
		if (a[i]!=a[top])
			break;		
		top--;		
	}
		
	if (top==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;	
		
	return 0;	
}
