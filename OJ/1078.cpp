
#include<iostream>  
#include<cstring>  
 
using namespace std;  
int main()  
{  
    void exchange(char *p1,char *p2); //��������  
 
    char str1[20],str2[20],str3[20];  //���������ַ�����    
 
	gets(str1); //�����ַ���  
	 
	gets(str2);  
 
    gets(str3);  
  
    if(strcmp(str1,str2)>0)  //���� �ȽϺ���  
        exchange(str1,str2);   
  
    if(strcmp(str1,str3)>0)  
	    exchange(str1,str3);  

    if(strcmp(str2,str3)>0)  
 		exchange(str2,str3);  

      cout<<str1<<endl<<str2<<endl<<str3<<endl;  
 
   return 0;  
}  
 
  
void exchange(char *p1,char *p2)  //���������ַ���  
{  
    char p[20];  
  
    strcpy(p,p1);  //���ø��ƺ���  
  
    strcpy(p1,p2);  
  
    strcpy(p2,p);  
  
  
}  

