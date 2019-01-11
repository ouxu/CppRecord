#include <iostream>
using namespace std;

int main()
{
	long f1,f2;
	int t;
	f1=f2=1;
	cout<<f1<<" "<<f2<<" ";
		
	for (int i=0;i<38;i++){
		t=f2;
		f2=f1+f2;
		f1=t;
		
		cout<<f2<<" ";			
	}	
	cout<<endl;
	return 0;
}
