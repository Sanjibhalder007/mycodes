#include<stdio.h>
void bubblesort(int[],int);
int main()
{
	int i,n,a[10];
	printf("\n enter array length:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter array elements:");
		scanf("%d",&a[i]);
	}
	printf("\n Given array :");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		
	}
	bubblesort(a,n);
	printf("\n");
	printf("\n Sorted Array :");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		
	}
	return 0;
}
void bubblesort(int a[10],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				
			}
			
		}
				
	}
}