#include<iostream>
using namespace std;
class add
{
int x,y,z;
public:
	void input()
	{
		cout<<"\n enter 2 no:";
		cin>>x>>y;
	}
	void calculate()
	{
		z=x+y;
	}
	void output()
	{
		cout<<"\n z="<<z;
	}
};
int main()
{
	add obj;
	obj.input();
	obj.calculate();
	obj.output();
	return 0;
}
