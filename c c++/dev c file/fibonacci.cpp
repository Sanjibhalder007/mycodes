
#include<iostream>
using namespace std;
class fib
{
int x;
int f=0,f1=1,fib,i;
public:
	void input()
	{
		cout<<"\n enter a no:";
		cin>>x;
	}
	void calculate()
	{ 
	    cout<<"\n fib="<<"0"<<"\t"<<"1";
		for(i=2;i<x;i++)
		{
			fib=f+f1;
			f=f1;
			f1=fib;
			output();
			
		}
	}
	void output()
	{
		cout<<"\t"<<fib;
	}
};
int main()
{
	fib obj;
	obj.input();
	obj.calculate();
	//obj.output();
	return 0;
}
