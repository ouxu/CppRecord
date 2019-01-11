///////////////////////////
//beer -01  
///////////////////////////
									/*
#include <iostream>
using  namespace std;

int main ()
{
	int i,j,money=823;
	
	for (i=1;i<823;i++)
	{
		
		for (j=1;j<823;j++)
		{
			if (i*23+j*19==money&&i<j)	
				cout <<i<<endl;
		}	
 
	}

	return 0; 
} 
									*/

///////////////////////////
//beer -02 简化过程 
///////////////////////////
									/* 
#include <iostream>
using namespace std;

int main ()
{
	int i,j,money=823;
	
	for (i=0;i<823/23;i++)
	{
		for (j=0;j<823/19;j++)
			{
				if 	(23*i+19*j==money&&i<j)
					cout<<i<<endl;
			}
	}
	
	return 0;	
}
									*/
 
///////////////////////////
//beer -03 再次简化 
///////////////////////////
									/* 
#include <iostream>
using namespace std;

int main ()
{
	int i,j,money=823;
	
	for (i=1;i<823/23;i++)
	for (j=i+1;j<823/19;j++)
	{
		if (i*23+j*19==823)
			cout <<i<<endl;
	} 
	
	return 0;
}
									*/

///////////////////////////
//beer -04 继续简化
///////////////////////////
									
#include <iostream>
using namespace std;

int main()
{
	int i,j,money=823;
	
	for (i=0;i*23<=823;i++)
	for (j=i+1;i*23+j*19<=823;j++)
	{
		if (i*23+j*19==823)
			cout<<i<<endl;		
	}
	 
	return 0;
}
									

///////////////////////////
//beer-05 浮点型,咋都不行= = 
/////////////////////////// 
 
