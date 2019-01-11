#include <iostream>
#include <string>

using namespace std;

const char nc[20] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
//string ans;

int main()
{
    int m, n, k, t, s;
    while(cin >> m >> n )
    {
        int j=0;
        char a[20]="";
        //ans = "";
        s = m;
        if(m==0)
			cout<<0<<endl;
        else{
        	while(m != 0)
        	{
            	k = m % n;
            	t = m / n;
            	if(k < 0)
            	{
                	k -= n;
                	t++;
           		}
            	m = t;
            	j++;
            	a[j]=nc[k];
            //ans.push_back(nc[k]);
        }
        
        for(int i = j; i >= 1; i--)
        {
            cout << a[i];
        }
        cout<<endl;}
    }
    
    return 0;
}
