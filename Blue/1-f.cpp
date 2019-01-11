#include <iostream>
using namespace std;

int main() {
	int button,bulb,i;
	cin>>button>>bulb;

	int Button[button],Bulb[bulb];

	for(i=0; i<bulb; i++)
		Bulb[i]=0;

	for (i=0; i<button; i++) {
		cin>>Button[i];
		int t=Button[i];
		int temp[t];

		for (int j=0; j<t; j++) {
			cin>>temp[j];
			if (temp[j]<=bulb) {
				Bulb[temp[j]-1]=1;
			}
		}
	}

	for (i=0; i<bulb; i++) {
		if (Bulb[i]==0) {
			break;
		}
	}

	if (i==bulb) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"NO"<<endl;
	}

	return 0;
}
