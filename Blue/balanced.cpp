#include <iostream>
using namespace std;

char s[100];
int Top,n=0;

void Push(char c)
{
	if (n==0)
	{
		Top=0;
		s[0]=0;
	}
	else
	{
		Top++;
		s[Top]=c;
	}
	n++;
}

void Pop()
{
	Top--;
	n--;
}

char TopTtem()
{
	if (n==0)
		return 1;
	else 
		return 0;
}
int main()
{
	char input;
	cin>>input;
	
	while(input!='/n')
	{
		if (input=='('||input=='['||input=='{')
			Push(input);
		else if(input==')')
		{
			if 	
		}			
	}
				
		
	
	return 0; 
} 
