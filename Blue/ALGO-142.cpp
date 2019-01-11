#include <iostream>
using namespace std;

int main()
{
	char S;
	float a,ai,b,bi,s=0,si=0;
	cin>>S>>a>>ai>>b>>bi;
	
	switch (S)
	{
		case '+':
			s=a+b,si=ai+bi,printf("%.2f+%.2fi",s,si);
			break; 
		case '-':
			s=a-b,si=ai-bi,printf("%.2f+%.2fi",s,si);
			break;
		case '*':
			s=a*b-ai*bi,si=a*bi+b*ai,printf("%.2f+%.2fi",s,si);
			break;
		case '/':
			s=(a*b+ai*bi)/(b*b+bi*bi),si=(ai*b-a*bi)/(b*b+bi*bi),printf("%.2f+%.2fi",s,si);
			break;
	}
		
	return 0;	
} 
