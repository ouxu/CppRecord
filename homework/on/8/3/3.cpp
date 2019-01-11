/*
	C++ ÉÏ»ú¿Î ¡¾°Ë¡¿      2016.6.20 
	P282 £¨3£© 
*/

#include <fstream>
#include <iostream>
using namespace std;

void func1()
{
	int a[10];
	ofstream outfile1("f1.dat"), outfile2("f2.dat");
	if (!outfile1)
	{
		cerr << "open f1.dat error!" << endl;
		exit(1);
	}
	if (!outfile2)
	{
		cerr << "open f2.dat error!" << endl;
		exit(1);
	}

	cout << "Enter 10 numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		outfile1 << a[i] << " ";
	}
	cout << "Enter 10 numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		outfile2 << a[i] << " ";
	}
	outfile1.close();
	outfile2.close();
}

void func2()
{
	ifstream infile("f1.dat");
	if (!infile)
	{
		cerr << "open f1.dat error!" << endl;
		exit(1);
	}
	ofstream outfile("f2.dat", ios::app);
	if (!outfile)
	{
		cerr << "open f2.dat error!" << endl;
		exit(1);
	}
	int a;
	for (int i = 0; i < 10; i++)
	{
		infile >> a;
		outfile << a << " ";
	}
	infile.close();
	outfile.close();
}

void func3()
{
	ifstream infile("f2.dat");
	if (!infile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	
	int a[20];
	int i, j, t;
	for (i = 0; i < 20; i++)
	{
		infile >> a[i];
	}
	for (i = 0; i < 19; i++)
		for (j = 0; j < 19; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j], a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	infile.close();

	ofstream outfile("f2.dat", ios::out);
	if (!outfile)
	{
		cerr << "open error!" << endl;
		exit(1);
	}
	cout << "data in f2.dat:" << endl;
	for (i = 0; i < 20; i++)
	{
		outfile << a[i] << " ";
		cout << a[i] << " ";
	}
	cout << endl;
	outfile.close();
}

int main()
{
	func1();
	func2();
	func3();
	return 0;
}
