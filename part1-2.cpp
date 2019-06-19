/*2、对象数组和函数
定义student类，数据成员包括姓名name和成绩score，成员函数包括构造函数，
拷贝构造函数和析构函数。定义函数void highestscore(student s[]),
输出分数最高的学生姓名和分数。在main函数中定义student s[N]，
调用highestscore函数,输出分数最高的学生姓名和分数。*/
#include<iostream>
#include<string>
using namespace std;
class Student
{
	private:
		string name;
		float score;
	public:
		Student()
		{
			name="";
			score=0;
		}
		Student(string n,float s)
		{
			name=n;
			score=s;
		}
		Student(Student &s)    //拷贝构造函数 
		{
			name=s.name;
			score=s.score;
		}
		~Student()
		{
			cout<<"is construction!"<<endl;
		}
		void highestscore(Student s[],int n)  //排序 
		{
			float max=s[0].score;//令最大值初始化为第一个学生的分数
			int j;
			for(int i=0;i<n;i++)
			{
				if(max<=s[i].score)
				{
					j=i;  //得到最大值的下标
				}
			}
				cout<<"the highest score student name:"<<s[j].name<<endl;//输出最大值学生的信息
				cout<<"the highest score:"<<s[j].score<<endl;
		}
		friend istream & operator >>(istream &is,Student &s)   //输入流 
		{
			is>>s.name>>s.score;
			return is;
		}
	

};
int main()
{
	const int N=3;    //定义常数据N 
	Student s[N];
	int i;
	for(i=0;i<N;i++)
	 cin>>s[i];
	    s[i].highestscore(s,N);   //调用 highestscore(Student s[],int n) 函数 
	return 0;
}

