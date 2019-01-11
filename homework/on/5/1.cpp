/*
	C++ 上机课 【五】      2016.5.30
	P273 （2）（3） 
*/

#include <iostream> 
using namespace std;

struct Student{
	float num;
	char name[10];
	float score[3];	
};

float average(Student s[],int x)
{
	float sum=0;
	for (int i=0;i<5;i++)
		sum+=s[i].score[x-1];
	return sum/5;	
}

float print(Student s)
{
	float ave;
	ave=(s.score[0]+s.score[1]+s.score[2])/3;
	cout<<"学号: "<<s.num<<"  姓名: "<<s.name<<"  成绩："
		<<s.score[0]<<" "<<s.score[1]<<" "<<s.score[2]
		<<"  平均分："<<ave<<endl; 
	return ave;
}

int main()
{
	Student s[5];
	cout<<"请按行输入5个学生的学号、姓名、三门课的成绩："<<endl;
	for (int i=0;i<5;i++)
		cin>>s[i].num>>s[i].name>>s[i].score[0]>>s[i].score[1]>>s[i].score[2];
	float max=s[1].score[0];int map=0;
	for (int i=0;i<5;i++){
		int t=print(s[i]); 
		if (t>max){
			map=i;
			max=t;
		} 
	}
	cout<<"最高分的学生为: ";
	print(s[map]); 
	float sc=0;
	for (int i=1;i<=3;i++){
		cout<<"第 "<<i<<" 门课的平均分为："<<average(s,i)<<endl; 
		sc+=average(s,i);
	}
	cout<<"总平均分为: "<<sc/3<<endl;
	
	return 0;
}
