#include <iostream>
#include <iomanip> 
using namespace std;
const int n=3;
class Student{
	public:
		Student(int s=0);
		void input();
		void print();
		static float aver(); 
		friend void max(Student[]);
		static float average;
		static int count;
	private:
		string num,name;
		int score[n];
		float avr,sum;
};
float Student::average=0;
int Student::count=0; 

int main()
{
	Student stu[n];
	int i,ma;
	for(i=0;i<n;i++)	stu[i].input();
	cout<<"ѧ��	����	SCORE1	SCORE2	SCORE3	"
		<<"TOTAL	AVERAGE"<<endl;
	for(i=0;i<n;i++)	stu[i].print();
	max(stu);
	cout<<"��ƽ����average=:"<<Student::aver()<<endl;
		
	return 0;
}

Student::Student(int s){
	sum=s;
}
void Student::input(){
	int j;
	cout<<"������ѧ����Ϣ: ѧ�� ����"
		<<" score1 score2 score3"<<endl;
	cin>>num>>name;
	for(j=0;j<3;j++){
	cin>>score[j];
	sum+=score[j];
}
	cout<<endl;	
	avr=sum/3;
	average+=avr;	
	count++;
}

void Student::print()
{
	int	j;
	cout<<num<<'\t'<<name;
	for(j=0;j<3;j++)
	cout<<'\t'<<score[j];
	cout<<'\t'<<sum;
	cout<<'\t'<<avr<<endl;
}
float Student::aver(){
	return (average/n);
}
void max(Student S[]){
	int m=0;
	for(int i=1;i<n;i++){
		if(S[i].sum>S[m].sum)	
			m=i;
	}
	cout<<"��߷�Ϊ: "<<S[m].sum<<endl;
	cout<<"�õ���߷ֵ���: "<<S[m].name<<endl;
}
