#include <iostream>
using namespace std;
int main ()
{
	int N=1000;
	char c[N];
	int n=0,i=0,j=0,k=0,l=0;
	cin.getline(c,N);
	while (c[n]!='\0')
	{
		if((c[n]<='z'&&c[n]>='a')||(c[n]<='Z'&&c[n]>='A'))
			i++;
		else if(c[n]<='9'&&c[n]>='0')
			j++;
		else if(c[n]==' ')
			k++;
		else 
			l++;
		n++;	
	}
	cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
	return 0;
}
