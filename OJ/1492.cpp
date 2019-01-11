#include <iostream>
using namespace std;

int main()
{
	int K;
	while (cin>>K)
	{
		char c[K];
		int a[K];
		int s=0,max=0;
		
		for (int i1=0;i1<K;i1++)
		{
			cin>>c[i1]>>a[i1];

			switch (c[i1])
			{
				case '+':
				{
					s++;
					(max>s)?(max=max):(max=s);
				}break;
				
				case '-':
				{
					int i;
					for (i=0;i<i1;i++)
					{
						if (a[i1]==a[i])
							break;
					}
					
					if (i==i1)
						max++,(max>s)?(max=max):(max=s);
					else
						s--,
						(max>s)?(max=max):(max=s);
				}break;
			}
		}
		cout<<max<<endl;
			
	}
		
	return 0;	
} 
