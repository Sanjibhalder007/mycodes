#include<iostream>
#include<math.h>
using namespace std;
class armstrong
{
	int num,num1,c=0,result=0,cal;
	public:
		void input();
		void calculate();
		void output();
};
void armstrong :: input()
{
	cout<<"\n ENTER YOUR NUMBER:";
	cin>>num;
}
void armstrong :: calculate()
{
	num1=num;
	while(num>0)
	{
		c=c+1;
		num=num/10;
	}
	num=num1;
	whille(num>0)
	{
		cal=num%10;
		num=num/10;
		result=result+pow(cal,c);
	}
}
void armstrong :: output(){
	num=num1;
	cout<<"\n YOUR GIVEN NUMBER:"<<num;
	if(num==result)
	{
		cout<<"\n YOUR GIVEN NUMBER "<<num<<" IS ARMSTRONG.";
	}
	else
	{
		cout<<"\n YOUR GIVEN NUMBER "<<num<<" IS NOT ARMSTRONG.";
	}
}
int main()
{
	armstrong obj;
	obj.input();
	obj.calculate();
	obj.output();
	return 0;
}
