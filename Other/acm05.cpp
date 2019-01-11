#include <iostream>
using namespace std;

int main()
{
    int n;

    while (cin>>n)
    {
        char c[n];
        int x[n];
        int s=0,max=s;
        for (int i1=0;i1<n;i1++)
        {
            cin>>c[i1]>>x[i1];
            int i;
            switch (c[i1])
            {
                case '+':
                    {
                    	s++;
                        (max>s)?(max=max):(max=s);
                    }break;

                case '-':
                    {
                        for (i=0;i<i1;i++)
                        {
                            if (x[i1]==x[i])
                                break;
                        }
                        if (i1==i)
                        {
                            max++;
                            (max>s)?(max=max):(max=s);
                        }
                        else
                        {
                            s--;
                            (max>s)?(max=max):(max=s);
                        }
                    }break;
            }
        }
          cout<<max<<endl;
    }

    return 0;
}

