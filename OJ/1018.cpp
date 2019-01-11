#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int T,i;
	cin>>T;
	for (i=0;i<T;i++)
	{

		char a[1000],b[1000];
		memset(a,'0',sizeof(a));
		memset(b,'0',sizeof(b));
		cin>>a>>b;

		//cout<<"Case "<<i+1<<":"<<endl;
		//cout<<a<<" + "<<b<<" = ";

		int n1=strlen(a),n2=strlen(b),max,min;
		(n1>n2)?(max=n1,min=n2):(max=n2,min=n1);
		int c[max+1],d[min+1];
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));

		int j;

		if (n1>n2)
        {
            for (j=0;j<max;j++)
                c[j]=a[n1-1-j]-'0';
            for (j=0;j<min;j++)
                d[j]=b[n2-1-j]-'0';
        }
        else
        {
            for (j=0;j<max;j++)
                c[j]=b[n2-1-j]-'0';
            for (j=0;j<min;j++)
                d[j]=a[n1-1-j]-'0';
        }




		for (j=0;j<max;j++)
		{
			if (c[j]+d[j]>=10)
			{
				c[j]=c[j]+d[j]-10;
				c[j+1]++;
			}
			else
				c[j]=c[j]+d[j];
		}


			for (j=max;j>=0;j--)
            {
                if (c[j]!=0)
                    break;
            }

            for (int k=j;k>=0;k--)
                        cout<<c[k];

			cout<<endl;


	}


	return 0;
}

