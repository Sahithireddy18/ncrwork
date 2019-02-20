#include<iostream>
#include<math.h>
using namespace std;
class student
{
	public:
	int rollno;
	char *name;
	int m1, m2, total;
	char grade;
	
	student()
	{
		
		name=NULL;
		rollno=0;
		m1=m2=total=0;
	}
	student(char *s_name, int rollno1 , int m9 , int m8)
	{
		int len=strlen(s_name);
		name= (char *)malloc(sizeof(char)*(len+1));
		strcpy(name, s_name);
		rollno=rollno1;
		m1=m9;
		m2=m8;
		
	}
	friend void generateresults(student s[], int n);
	
};
	
	ostream & operator <<(ostream &cout,const student &s)
	{
		cout<< s.name<<" ";
		cout<<s.rollno<<" ";
		cout<<s.m1<<" "<<s.m2<<" "<<s.grade;
		return cout;
	}
	istream  & operator >>(istream &cin, student &s)
	{
		
		s.name= (char *)malloc(sizeof(char)*(10));
		cin>>s.name;
		cin>>s.rollno;
		cin>>s.m1;
		cin>>s.m2;
		
		return cin;
	}

	 void generateresults(student s[], int n)
	{
		for(int i=0;i<n;i++)
		{
			s[i].total=s[i].m1+s[i].m2;
			if(s[i].total>90)
				s[i].grade='S';
				else if(s[i].total>80 && s[i].total<90)
				s[i].grade='A';
				else if(s[i].total>70 && s[i].total<80)
				s[i].grade='B';
				
		}
		
					
		
	}
int main()
{
	student s[3];
	for(int i=0;i<3;i++)
	{
		cin>>s[i];
	}
	 generateresults(s, 3);
		for(int i=0;i<3;i++)
	{
		 cout<<s[i];
		 cout<<"\n";
	}
	
	return 0;
}
		
		
	

