


#include<iostream>
using namespace std;
class max_of_two
{
int x,y,flag=0;
public:
	void input()
	{
		cout<<"\n enter 2 no:";
		cin>>x>>y;
	}
	void calculate()
	{ 
	    if(x>y)
		{
			flag=1;
		}
		
	
	}
	void output()
	{
		if(flag==1)
		{
			cout<<"\n max is "<<x;
		}
		else
		{
			cout<<"\n max is "<<y;
		}
	}
};
int main()
{
	max_of_two obj;
	obj.input();
	obj.calculate();
	obj.output();
	return 0;
}
