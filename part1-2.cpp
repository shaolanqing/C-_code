/*2����������ͺ���
����student�࣬���ݳ�Ա��������name�ͳɼ�score����Ա�����������캯����
�������캯�����������������庯��void highestscore(student s[]),
���������ߵ�ѧ�������ͷ�������main�����ж���student s[N]��
����highestscore����,���������ߵ�ѧ�������ͷ�����*/
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
		Student(Student &s)    //�������캯�� 
		{
			name=s.name;
			score=s.score;
		}
		~Student()
		{
			cout<<"is construction!"<<endl;
		}
		void highestscore(Student s[],int n)  //���� 
		{
			float max=s[0].score;//�����ֵ��ʼ��Ϊ��һ��ѧ���ķ���
			int j;
			for(int i=0;i<n;i++)
			{
				if(max<=s[i].score)
				{
					j=i;  //�õ����ֵ���±�
				}
			}
				cout<<"the highest score student name:"<<s[j].name<<endl;//������ֵѧ������Ϣ
				cout<<"the highest score:"<<s[j].score<<endl;
		}
		friend istream & operator >>(istream &is,Student &s)   //������ 
		{
			is>>s.name>>s.score;
			return is;
		}
	

};
int main()
{
	const int N=3;    //���峣����N 
	Student s[N];
	int i;
	for(i=0;i<N;i++)
	 cin>>s[i];
	    s[i].highestscore(s,N);   //���� highestscore(Student s[],int n) ���� 
	return 0;
}

