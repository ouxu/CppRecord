

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

链表创建

 

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

代表新插入的位于

p2

之后的节点，插入新节点

后，将

p1

赋给

p2,

这时两者相同。

p1

中的数据成员

num

的值为

0

时，结束节点的插入。


 










  

int ListLength(Node L) 

//

链表的计数

 

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

链表的查找

 

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

输出链表

 

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

清空链表

 

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

链表逆序（循环方法）

 

{     

  Node 

*p,*q,*r;     

 

 

p=head; 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

一开始

p

指向第一个节点

 

 

 

 

 

 

q=p->next; 

 

 

 

 

 

 

 

 

 

 

//q

指向第二个节点

 

 

 

 

 

 

while (q!=NULL) 

 

 

 

 

//

如果没到链尾

 

 

 

 

 

 

{ 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

以第一次循环为例

 

 

 

 

 

 

r=q->next; 

 

 

 

 

 

 

 

 

 

 

//r

暂时存储第三个节点

 

 

 

  

 

 

q->next=p; 

 

 

 

 

 

 

 

 

 

 

//

没执行此句前，

q->next

指向第三个节点

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

执行之后，

q->next

指向第一个节点

p    

 

 

p=q; 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

之后

p

指向第二个节点

 

 

 

 

 

 

q=r; 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//q

指向第三个节点

 

 

 

  

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

 

//

即

...p=>q=>r...

变为

   ...p<=q<=r...    

 

 

} 

 

 

  

  head->next=NULL;   //

最后原来的链头变为链尾，把它指向

N
