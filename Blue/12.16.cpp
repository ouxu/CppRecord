

#include <iostream,h> 

 

#include <

string

.h> 

  

struct

 Node 

{  

    

int

 num  

    

Node *next  

}; 

  

Node* 

Create()    

//

������

 

{  

    

int

 n=

0

;  

    

Node *p1,*p2,*head; 

    

p1=p2=

new

 Node; 

    

cin>>p1->num; 

    

head=NULL;  

    

while

 (p1->num!=

0

) 

    

{  

        

if

 (n==

1

) 

        

{  

            

head=p1; 

        

} 

        

else

  

         






p2->next=p1; 

        

p2=p1; 

        

p1=

new

 Node; 

        

cin>>p1->num; 

        

n++; 

    

}  

    

p2->next=NULL; 

  

    

return

 head; 

} 

 

 

 

 

 

 

  

p1

�����²����λ��

p2

֮��Ľڵ㣬�����½ڵ�

�󣬽�

p1

����

p2,

��ʱ������ͬ��

p1

�е����ݳ�Ա

num

��ֵΪ

0

ʱ�������ڵ�Ĳ��롣


 










  

int ListLength(Node L) 

//

����ļ���

 

{     

Node p=L; 

 

 

 

int count=0; 

 

 

 

while

(p->next) 

 

 

 

{  

 

 

 

 

 

count++; 

 

 

 

 

 

p=p->next; 

 

 

 

}  

   return 

count; 

} 

  

int Search(Node &L , int value) 

 

 

//

����Ĳ���

 

{  

Node p=L; 

   int 

index=0; 

 

 

 

while

(p) 

 

 

 

{  

if(p->num== value) 

return index; 

 

 

 

 

 

p=p->next; 

  

index++; 

 

 

 

}  

 

 

 

 

 

 

return 0; 

} 

  

void

 Print(Node *head) 

//

�������

 

{  

    

 

 

 

Node* p=head; 

    

while

 (p) 

    

{  

        

cout<<p->num<<

" "

; 

        

p=p->next; 

    

}  

    

cout<<endl; 

 

} 

 

 

 

 

 

  













  

void Destruct(Node *head) 

 

 //

�������

 

{  

    

Node *current = head, *temp = NULL; 

 

 

 

while

 (current) 

    

{  

        

temp = current;  

        

current = current ->next; 

        

delete temp; 

    

} 

} 

 

 

 

 

  

Node *ReverseList(Node *head) 

 

 

 

//

��������ѭ��������

 

{     

  Node 

*p,*q,*r;     

 

 

p=head; 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

һ��ʼ

p

ָ���һ���ڵ�

 

 

 

 

 

 

q=p->next; 

 

 

 

 

 

 

 

 

 

 

//q

ָ��ڶ����ڵ�

 

 

 

 

 

 

while (q!=NULL) 

 

 

 

 

//

���û����β

 

 

 

 

 

 

{ 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

�Ե�һ��ѭ��Ϊ��

 

 

 

 

 

 

r=q->next; 

 

 

 

 

 

 

 

 

 

 

//r

��ʱ�洢�������ڵ�

 

 

 

  

 

 

q->next=p; 

 

 

 

 

 

 

 

 

 

 

//

ûִ�д˾�ǰ��

q->next

ָ��������ڵ�

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

ִ��֮��

q->next

ָ���һ���ڵ�

p    

 

 

p=q; 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

֮��

p

ָ��ڶ����ڵ�

 

 

 

 

 

 

q=r; 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//q

ָ��������ڵ�

 

 

 

  

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

��

...p=>q=>r...

��Ϊ

   ...p<=q<=r...    

 

 

} 

 

 

  

  head->next=NULL;   //

���ԭ������ͷ��Ϊ��β������ָ��

N
