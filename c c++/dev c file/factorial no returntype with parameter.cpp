#include<iostream>
using namespace std;
class fact
{
	int n;
	public:
		void input(int);
		int calculate();
};
void fact :: input(int x)
{
	n=x;
}
int fact :: calculate()
{
	int f=1;
	while(n>1)
	{
		f=f*n;
		n--;
	}
	return f;
}
int main()
{
	fact obj;
	int a,z,m;
	cout<<"\n enter a no:";
	cin>>a;
	obj.input(a);
	z=obj.calculate();
	m=z;
	cout<<"\n factorial of "<<a<<" is "<<m;
}
