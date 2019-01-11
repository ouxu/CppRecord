/*
	¶þ²æÊ÷
*/ 

#include <iostream>
using namespace std;

struct TreeNode{
	char val;
	TreeNode *left;
	TreeNode *right;
};

void AddTreeNode(TreeNode,TreeNode *);
void PreOrderTraverse(TreeNode *);
void InOrderTraverse(TreeNode *);
void PosOrderTraverse(TreeNode *);

int main() 
{
	char val;
	TreeNode T,p;
	cin>>val;
	T.left=T.right=NULL;
	
	while (val!=' '){
			p.val=val;
			p.left=NULL;
			p.right=NULL;
		if (T.left==NULL&&T.right==NULL)
			T=p;
		else 
			AddTreeNode(T,p);
		cin>>val; 
	} 
	PreOrderTraverse(T);
	InOrderTraverse(T);
	PosOrderTraverse(T);
	
	return 0;
}

void AddTreeNode(TreeNode T,TreeNode p)
{
	if ((p.val<=T.val)&&(T.left!=NULL))
		AddTreeNode(T.left,p);
	else if ((p.val<=T.val)&&(T.left==NULL)) 
		T.left=p;
	else if (T.right!=NULL)
		AddTreeNode(T.right,p);
	else 
		T.right=p;
} 
