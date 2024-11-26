#include<iostream>
using namespace std;
class student_info
{
	public:
		char name[100];
		int roll;
		void name_input();
		void name_output();
};
class student_marks:public virtual student_info
{
	public:
		int p,c,m,e;
		int total;
		float avg;
		float extra_marks,cal;
		void marks_input();
		void marks_output();
		void external_marks_calculate();
		void external_marks_calculate_output();
		
};
class student_sports:public virtual student_info
{
	public:
		int i=1,j=0;
		void sports_info();
};
class student_result:public student_marks,public student_sports
{
	public:
		void result_input();
		//void result_output();
		
};
void student_info :: name_input()
{
	cout<<"\n ENTER YOUR NAME:";
	cin>>name;
	cout<<"\n ENTER ROLL:";
	cin>>roll;
}
void student_info :: name_output()
{
	cout<<"\n NAME="<<name;
	cout<<"\n ROLL="<<roll;
	
}
void student_marks :: marks_input()
{
	cout<<"\n ENTER YOUR MARKS HERE:";
	cout<<"\n phy:";
	cin>>p;
	cout<<"\n chem:";
	cin>>c;
	cout<<"\n math:";
	cin>>m;
	cout<<"\n eng:";
	cin>>e;
}
void student_marks :: marks_output()
{
	total=p+c+m+e;
	avg=float(total)/4;
	cout<<"\n PHYSIC="<<p<<"\n CHEMISTRY="<<c<<"\n MATHEMATICS="<<m<<"\n ENGLISH="<<e;
}
void student_marks :: external_marks_calculate()
{
		
	if(avg>=80)
	{
	extra_marks=total*0.6;
	cal=total+extra_marks;
	cout<<"\n AFTER ADDING EXTRA SPORTS BONOUS MARKS";	
	}
	else if(avg>=70)
	{
	extra_marks=total*0.5;
	cal=total+extra_marks;
	cout<<"\n AFTER ADDING EXTRA SPORTS BONOUS MARKS";	
	}
	else if(avg>=60)
	{
	extra_marks=total*0.4;
	cal=total+extra_marks;
	cout<<"\n AFTER ADDING EXTRA SPORTS BONOUS MARKS";	
	}
	else if(avg>=50)
	{
	extra_marks=total*0.3;
	cal=total+extra_marks;
	cout<<"\n AFTER ADDING EXTRA SPORTS BONOUS MARKS";	
	}
	else if(avg>=40)
	{
	extra_marks=total*0.2;
	cal=total+extra_marks;
	cout<<"\n AFTER ADDING EXTRA SPORTS BONOUS MARKS";	
	}
	else
	{
		cal=total;
		cout<<"\n SORRY YOUR AVARAGE MARKS IS BELLOW 40% SO DON'T GET ANY EXTRA MARKS.";
	}
	external_marks_calculate_output();
}
void student_marks :: external_marks_calculate_output()
{
	cout<<"\n TOTAL MARKS="<<cal;
}
void student_sports :: sports_info()
{
	int p;
	cout<<"\n IF YOU ARE A NATIONAL LEVEL PLAYER THEN ENTER '1' OTHERWISE '0' ";
	cin>>p;
	if(i==p)
	{
	//external_marks_calculate();	
	}
	else
	{
		cout<<"\n OKAY......!";
	//marks_output();	
	}
}
void student_result :: result_input()
{
	cout<<"\n STUDENT RESULT IS HERE:";
}
int main()
{
	student_result obj;
	obj.name_input();
	obj.marks_input();
	obj.sports_info();
	obj.result_input();
	obj.name_output();
	obj.marks_output();
	obj.sports_info();
	return 0;
}
