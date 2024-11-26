#include<iostream>
using namespace std;
class fact
{
	int n,p,f=1;
	public:
	void input();
	void calculate();
	void output();
	 
};
void fact :: input()
{
	cout<<"\n enter a no;";
	cin>>n;
	p=n;
}
void fact :: calculate()
{
	while(n>0)
	{
		f=f*n;
		n--;
	}
}
void fact :: output()
{
	cout<<"\n the factorial of "<<p<<" is "<<f;
}
int main()
{
fact obj;
obj.input();
obj.calculate();
obj.output();
return 0;
}
