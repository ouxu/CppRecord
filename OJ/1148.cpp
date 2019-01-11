			#include <iostream>
			using namespace std;
			
			int main()
			{
				int a[4];
				for (int i=0;i<4;i++)
					cin>>a[i];
				
				for (int i=0;i<3;i++)
				for (int j=i+1;j<4;j++)
				{
					if (a[i]>a[j])
					{
						int t=a[i];
						a[i]=a[j];
						a[j]=t;
					}
				}
				
				for (int i=0;i<3;i++)
					cout<<a[i]<<" ";
				cout<<a[3]<<endl;
				
				return 0;
			}
