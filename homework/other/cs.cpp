#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int a,b,c;
    int i,j,k,m,n,g;
    bool prise=true;
    printf("请输入数据范围，左侧必须大于等于4（4 100）：");
    scanf("%d %d",&a,&b);
    if(a%2==0)
        c=a;
    else
        c=a+1;
    for(;c<=b;c+2)
    {
        for(i=1;i<=c;i++)
        {
            k=sqrt(i);
            for(j=2;j<=k&&prise;j++)
            {
                if(i%j==0) prise=false;
                if(prise)
                {   m=c-i;
                    n=sqrt(m);
                    for(g=2;g<=n&&prise;g++)
                    {
                        if(m%g==0) prise=false;
                        if(prise)
                        {
                            printf("%d+%d=%d\n",i,m,c);
                        }
                    }
                }
            }
        }
    }

}
