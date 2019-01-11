#include"iostream"
#include"iomanip"
using namespace std;

const int n=3;
class Student{
	public:
		Student(int s=0);
		void input();
		void print();
		static float aver();//静态成员函数用于访问静态数据成员 
		friend void max(Student[]);//友元函数可以访问私有成员变量 
		static float average;//静态数据成员作为全局变量使用 
		static int count;//静态数据成员作为全局变量使用
	private:
		string num,name;
		int score[n];
		float avr,sum;//私有数据成员只能被成员函数或友元函数访问 
};
float Student::average=0;
int Student::count=0;//静态数据成员需要在类外进行初始化 

int main(){
Student stu[n];
int i,ma;
for(i=0;i<n;i++)	stu[i].input();
cout<<"NO.	NAME	  SCORE1   SCORE2	   SCORE3  TOTAL    AVERAGE"<<endl;
for(i=0;i<n;i++)	stu[i].print();
max(stu);
cout<<"总平均分average=:"<<Student::aver()<<endl;
	
return 0;
}

Student::Student(int s){
	sum=s;
}
void Student::input(){
	int j;
	cout<<"please input the students records:"<<endl;
	cout<<"NO.:";
	cin>>num;
	cout<<"name:";
	cin>>name;
	for(j=0;j<3;j++){
	cout<<"score"<<j+1<<":";
	cin>>score[j];
	sum+=score[j];
}
	cout<<endl;	
	avr=sum/3;
	average+=avr;	
	count++;
}

void Student::print(){
int	j;
	cout<<num<<setw(10)<<name;
for(j=0;j<3;j++)
	cout<<setw(10)<<score[j];
	cout<<setw(10)<<sum;
	cout<<setw(15)<<avr<<endl;
}
float Student::aver(){
	return (average/n);
}

void max(Student S[]){
	int m=0;
	for(int i=1;i<n;i++){
	if(S[i].sum>S[m].sum)	m=i;
	}
cout<<"the highest score is: "<<S[m].sum<<endl;
cout<<"the 1st is:"<<S[m].name<<endl;
}//使用对象数组作为函数参数 
