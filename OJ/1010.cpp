#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long x = 0;
	double s = 0, y;
	for (int i = 0; i < 30; i++)
	{
		x++;
		y = 1;
		for (int j = 1; j <= x; j++)
			y *= j;
		s += y;
	}
	cout << setiosflags(ios::scientific)
			 << setprecision(2) << s << endl;
	return 0;
}
