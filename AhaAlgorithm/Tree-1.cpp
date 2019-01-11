#include<stdio.h>
#include<stdlib.h>

typedef struct BiTNode{
    char ch;            
    struct BiTNode *lchild;      
    struct BiTNode *rchild;      
}BiTNode,*BiTree;


void AddBiTree(BiTree ,BiTNode *);
void PreOrderTraverse(BiTNode *); 
void InOrderTraverse(BiTNode *);  
void PostOrderTraverse(BiTNode *);


int main()
{
    char ch;
	BiTree T,p;
    scanf("%c",&ch);   
	T=NULL;

    while(ch!=' '){        
		if(p=(BiTNode *)malloc(sizeof(BiTNode))){
            p->ch = ch;
            p->lchild = NULL;
            p->rchild = NULL;
        }
        else
        {
            printf("ÄÚ´æ·ÖÅä³ö´í\n");
            exit(0);
        }
        if(T==NULL)
            T=p;
        else
            AddBiTree(T,p);
        scanf("%c",&ch);
    }
    PreOrderTraverse(T);
    InOrderTraverse(T);
    PostOrderTraverse(T);
}

void AddBiTree(BiTree T,BiTree p)
{
    if((p->ch <= T->ch)&&(T->lchild!=NULL))
        AddBiTree(T->lchild,p);
    else if((p->ch <= T->ch)&&(T->lchild==NULL))
        T->lchild=p;
    else if(T->rchild!=NULL)
        AddBiTree(T->rchild,p);
    else T->rchild=p;
}

void PreOrderTraverse(BiTree T)
{
    if(T){
        printf("%c ",T->ch);
        PreOrderTraverse(T->lchild);
        PreOrderTraverse(T->rchild);
    }
}

void InOrderTraverse(BiTree T)
{
    if(T){
        InOrderTraverse(T->lchild);
        printf("%c ",T->ch);
        InOrderTraverse(T->rchild);
    }
}

void PostOrderTraverse(BiTree T)
{
    if(T){
        PostOrderTraverse(T->lchild);
        PostOrderTraverse(T->rchild);
        printf("%c ",T->ch);
    }
}

