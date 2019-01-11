#include"iostream"
#include"iostream"
#include"iomanip"
using namespace std;

const int n=3;
typedef struct student{
	string num,name;
	int score[4];
	float avr,sum;
}Student;

void input(Student *);
void print(Student *);
void aver(float &,Student*);
int max(Student*);

int main(){
Student stu[n];
int ma;
float average=0;
Student *q=stu;
input(q);
aver(average,q);
ma=max(q);
print(q);
cout<<"×ÜÆ½¾ù·Öaverage=:"<<average<<endl;
cout<<"the highest score is: "<<stu[ma].sum<<endl;
cout<<"the 1st is:"<<stu[ma].name<<endl;
return 0;
}
void input(Student *p){
	int i,j;
	for(i=0;i<n;i++,p++){
	cout<<"please input the "<<i+1<<"th students records:"<<endl;
	cout<<"NO.:";
	cin>>p->num;
	cout<<"name:";
	cin>>p->name;
for(j=0;j<3;j++){
	cout<<"score"<<j+1<<":";
	cin>>p->score[j];
}
cout<<endl;
}}

void print(Student *p){
int	i,j;
	cout<<"NO.	NAME	  SCORE1   SCORE2	   SCORE3  TOTAL    AVERAGE"<<endl;
for(i=0;i<n;i++,p++){
	cout<<p->num<<setw(10)<<p->name;

for(j=0;j<3;j++)
	cout<<setw(10)<<p->score[j];
	cout<<setw(10)<<p->sum;
	cout<<setw(15)<<p->avr<<endl;
}}

void aver(float &a,Student *p){

	for(int i=0;i<n;i++,p++){
		p->sum=0;
		for(int j=0;j<3;j++)
		p->sum+=p->score[j];
		p->avr=p->sum/3;
	a+=p->avr;
	}
	a/=n;
}

int max(Student S[]){
	int m=0;
	for(int i=1;i<n;i++){
	if(S[i].sum>S[m].sum) m=i;
	}
	return m;
}
