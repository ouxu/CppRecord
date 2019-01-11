
#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,m=0;
    while (cin>>n)
    {    
        cin>>a>>b>>c;
        int v,s=0;
        for (int i1=0;i1<n;i1++)
        {
            cin>>v;
            s+=v;
            if (s>=a)
            {
                if (s<b)
                    m+=2;
                if (s<c&&s>=b)
                    m+=3;
                if (s>=c)
                    m+=4;
                s=0;
            }
        }
        cout<<m<<endl; 
        
    }
    
    
    return 0;    
} 

