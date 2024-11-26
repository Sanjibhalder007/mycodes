#include<iostream>
using namespace std;
class fact
{
int x,z=1;
public:
	void input()
	{
		cout<<"\n enter a no:";
		cin>>x;
	}
	void calculate()
	{
		while(x>0)
		{
			z=z*x;
			z--;
		}
	}
	void output()
	{
		cout<<"\n z="<<z;
	}
};
int main()
{
	fact obj;
	obj.input();
	obj.calculate();
	obj.output();
	return 0;
}
