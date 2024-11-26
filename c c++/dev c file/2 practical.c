#include<stdio.h>
#include<math.h>
int prime(int);
int twin_prime(int,int);
int factorial(int);

int main()
{
	int ch,num1,num2,num,fact;
	do
	{
		printf("\nMenu\n");
        printf("1. Check whether a pair of integers are twin primes\n");
        printf("2. Find factorial of a small integer\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);


        switch(ch)
        {
        	case 1:
        		printf("Enter the first number: ");
        		scanf("%d", &num1);
        		
        		printf("Enter the second number: ");
        		scanf("%d", &num2);
        		
        		if(twin_prime( num1, num2))
        		{
        			printf("%d and %d are twin primes.\n", num1, num2);
				}
				else
				{
					printf("%d and %d are not twin primes.\n", num1, num2);
				}

               break ;
               case 2:
               	printf("\n enter a small integer:");
               	scanf("%d",&num);
               	if(num<0)
               	{
               		printf("\n factorial is not defined for negetive");
               		
				}
				else
				{
					fact=factorial( num);
					printf("\n the factorial of %d is %d",num,fact);
				}
				break ;
				case 3:
					printf("\n exiting programme");
					break ;
				default:
					printf("\n invalid choice.please try again...");
		}
	} while(ch!=3);
	return 0;
}

int prime(int num)
{
	int i;
	if(num<2)
	{
		return 0;
	}
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int twin_prime(int num1,int num2)
{
	if(prime(num1) && prime(num2) && ((num2-num1==2)||(num1-num2==2)))
	
	{
	
	return 1;
}
	else
	{
		return 0;
	}
}

int factorial(int num )
{
	int f=1;
	while(num>0)
	{
		f=f*num;
		num--;
	}
	return f;
}
