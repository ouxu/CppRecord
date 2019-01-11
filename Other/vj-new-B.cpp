#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

double H,D,h;
double s(double x)
{
    return (h*D-H*(D-x))/x+(D-x);
}
int main()
{
    int n;
    double d1,d2,l,r,mid1,mid2;
    cin>>n; 
    while(n--)
    {
        cin>>H>>h>>D;
        l=(H-h)*D/H;r=D;
        while(fabs(r-l)>=1e-10)
        {
            mid1=(l+r)/2;
            mid2=(mid1+r)/2;
            d1=s(mid1);
            d2=s(mid2);
            if(d1<=d2) l=mid1;
            else r=mid2;
        }
        cout<<fixed<<setprecision(3)<<s(l)<<endl;
    }
    return 0;
}

