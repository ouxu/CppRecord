#include<iostream>
using namespace std; 
int maximum(int[][4],int,int);
int fail(int[][4],int,int);
int average(int[][4],int,int);

int main()
{
	int sg[5][4]={{80,95,85,94},
	              {85,90,88,96},
	              {87,59,90,89},
	              {86,87,92,90},
				  {92,80,91,58}};
	maximum(sg,5,4);
	fail(sg,5,4);
	average(sg,5,4);	  
}

int maximum(int sg[5][4],int orders,int subjects)
{
	int a,b;
	int max=0;
	for(int i=0;i<orders;i++)
	for(int j=0;j<subjects;j++)
	if(sg[i][j]>max)
	{
		max=sg[i][j];
		a=i,b=j;
		cout<<"成绩最高的学生序号："<<i<<"\n" <<"课程："<<j<<endl;
	}
	return max;
}

int fail(int sg[5][4],int orders,int subjects)
{
	for(int i=0;i<orders;i++)
	for(int j=0;j<subjects;j++)
	if(sg[i][j]<60)
	{cout<<"不及格的学生序号是："<<i<<endl;
	for(int j=0;j<subjects;j++)
	cout<<"课程-" <<j<<"分数\n"<<endl;break;
	}
	return 0;
}

int average(int sg[5][4],int orders,int subjects)
{
	double ave =0;
	for(int j=0;j<subjects;j++)
	for(int i=0;i<orders;i++)
	{
	ave=(ave + sg[i][j])/5;	
	cout<<"全部同学课程-"<<j<<"的平均分数" <<ave<<endl;
	}
	return 0;
}

