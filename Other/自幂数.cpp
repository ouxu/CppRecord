//���������� 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
		int start,end;
		int m,d,sum,i;
	cout<<"������λ����";
	cin>>n;
	while(n>0)
		{
			start=pow(10,n-1);
			end=pow(10,n)-1;
			cout<<n<<"λ���������У�";
			for(i=start;i<=end;i++)
				{
					m=i;
					sum=0;
					while(m!=0)
						{
							d=m%10;
							sum+=pow(d,n); 
							m=m/10; 
							
						}
					if(sum==i)
					cout<<i<<" ";
				}
			cout<<endl;
			cout<<"������λ����";
			cin>>n;
		}
	
	
	
	
	return 0;
 } 
