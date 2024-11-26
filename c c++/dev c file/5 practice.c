#include <stdio.h>
void fib();
int main(){
	fib();
	return 0;
}

void fib()
{
	int n,first=0,second=1,next,i;
	printf("\n enter n:");
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		
		next=first+second;
		first=second;
		second=next;
		printf("\n %4d",next);
	}   
}
