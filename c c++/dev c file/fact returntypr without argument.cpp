#include<iostream>
using namespace std;
class fact
{
	int n,p,f=1;
	public:
		void input();
		int calculate();
};
void fact :: input()
{
	cout<<"\n enter a no:";
	cin>>n;
	p=n;
}
int fact :: calculate()
{
	while(n>0)
	{
		f=f*n;
		n--;
	}
	return f;
}
int main()
{
	fact obj;
	obj.input();
	int z;
    z=obj.calculate();
	cout<<"\n factorial is"<<z;
	return 0;
}
