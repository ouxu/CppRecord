//ʮ����ת��Ϊ������Ƶ�Դ��  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    long n;  
    int p,c,m=0,s[100];  
    cin>>n;  
    (n>0)?(n=n):(n=-n);
    cin>>p;
	p=-p;  
  
    while (n!=0)//����ת���������������s[m]  
    {  
        c=n%p;  
        n=n/p;  
        m++;s[m]=c;   //��������˳���������s[m]��  
    }  
  
    for(int k=m;k>=1;k--)//���ת���������  
    {  
        if(s[k]>=10) //��Ϊʮ�����Ƶ���������Ӧ����ĸ  
            cout<<(char)(s[k]+55);  
        else         //����ֱ���������  
            cout<<s[k];  
    }  
  
    cout<<endl;  
  
    return 0;  
}  

