
#include<iostream>
using namespace std;
class prime
{
int x,flag=0,i=2,r;
public:
	void input()
	{
		cout<<"\n enter a no:";
		cin>>x;
	}
	void calculate()
	{ 
	    do{
	    	r=x%i;
	    	if(r==0)
	    	{
	    		flag=1;
	    		break;
	    		
			}
			i++;
		}
		while(i<=x/2);	
	
	}
	void output()
	{
		if(flag==0)
		{cout<<"\n entered number "<<x<<" is prime number.";
		} 
		else
		{
			cout<<"\n entered number "<<x<<" is not prime number.";
		}
	}
};
int main()
{
	prime obj;
	obj.input();
	obj.calculate();
	obj.output();
	return 0;
}
