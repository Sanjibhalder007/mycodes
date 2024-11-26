#include<iostream>
using namespace std;
class A
{
	int real,img;
	public:
		A();
		A(int);
		A(int,int);
		void output();
		A sum(A,A);
};
A :: A()
{
	real=0;
	img=0;
}
A :: A(int p)
{
	real=p;
	img=p;
}
A :: A(int a,int b)
{
	real=a;
	img=b;
}
void A :: output()
{
	if(img<0)
	{
		cout<<real<<img<<"i";
	}
	else
	{
		cout<<real<<"+"<<img<<"i";
	}
}
A A ::  sum(A m,A n)
{
	A p;
	p.real=m.real+n.real;
	p.img=m.img+n.img;
	return (p);
}
int main(){
	int a,b,c,d;
	cout<<"\n enter 1st number:";
	cin>>a>>b;
	A obj1(a,b);
	cout<<"\n enter 2nd number:";
	A obj2(c,d);
	cout<<"\n 1st complex number:";
	obj1.output();
	cout<<"\n 2nd complex number:";
	obj2.output();
	A obj3,obj4;
	obj3=obj4.sum(obj1,obj2);
	cout<<"\n sum=";
	obj3.output();
	return 0;
}
