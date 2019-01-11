#include <iostream>
#include <string>
using namespace std;

const char ch[20]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main()
{
	int n,p,t1,t2;
	char c[100]="";
	
	while (cin>>n>>p)
	{
		if (n==0)
			break ;
	//	if (n==0)
	//		cout<<0<<endl;
		
		int j=0;
			
		while (n!=0)
		{
			t1=n%p;
			t2=n/p;
			
			if (t1<0)
			{
				t1-=p;
				t2++;
			}
			
			n=t2;
			c[j]=ch[t1];
			j++;
		}
	
	for(int i=j-1;j>0;i--)
    {  
        
    
                
            cout<<c[i];  
    }  
  
    cout<<endl;  
		
		
	}
	
	
	
	
	
	
	
	return 0;	
} 
