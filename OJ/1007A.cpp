#include <iostream>
#include <iomanip> 
using namespace std;
int main()
{   int a,n,i,t;
    float x,sum;
    sum=0; i=0; t=0;
    for(n=0;n<20;n++) 
    {      cin>>a;  
           if(a<0) i+=1;
	   if(a>0) {t++; ;sum=sum+a;}
}       
           x=sum/t;
        cout<<i<<endl;
        cout<<fixed<<setprecision(2)<<x<<endl;
    return 0;
}
