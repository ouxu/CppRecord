
#include<iostream>  
#include<cstring>  
 
using namespace std;  
int main()  
{  
    void exchange(char *p1,char *p2); //函数声明  
 
    char str1[20],str2[20],str3[20];  //定义三个字符数组    
 
	gets(str1); //输入字符串  
	 
	gets(str2);  
 
    gets(str3);  
  
    if(strcmp(str1,str2)>0)  //调用 比较函数  
        exchange(str1,str2);   
  
    if(strcmp(str1,str3)>0)  
	    exchange(str1,str3);  

    if(strcmp(str2,str3)>0)  
 		exchange(str2,str3);  

      cout<<str1<<endl<<str2<<endl<<str3<<endl;  
 
   return 0;  
}  
 
  
void exchange(char *p1,char *p2)  //交换两个字符串  
{  
    char p[20];  
  
    strcpy(p,p1);  //调用复制函数  
  
    strcpy(p1,p2);  
  
    strcpy(p2,p);  
  
  
}  

