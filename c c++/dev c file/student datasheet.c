// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n,p;
printf("\n enter a no:");
scanf("%d",&n);
p=n;

for(i=1;i<=n;i++)

{
	 for(j=1;j<=i-1;j++)
    {
        printf(" ");
    }
    for(j=1;j<=2*p-1;j++)
    {
        printf("1");
        //printf(" ");
    }
    p=p-1;
    printf("\n");
    for(j=1;j<=i-1;j++)
    {
        printf(" ");
    }
    for(j=1;j<=2*p-1;j++)
    {
        printf("1");
        //printf(" ");
    }
    p=p-1;
    printf("\n");
    
}
for(i=1;i<=n;i++)
{
  for(j=1;j<=i-1;j++)
    {
        printf(" ");
    }
    for(j=1;j<=2*p-1;j++)
    {
        printf("1");
        //printf(" ");
    }
    p=p-1;
    printf("\n");
    for(j=1;j<=i-1;j++)
    {
        printf(" ");
    }
    for(j=1;j<=2*p-1;j++)
    {
        printf("1");
        //printf(" ");
    }
    p=p-1;
    printf("\n");
}


    return 0;
    
}
    
