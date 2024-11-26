#include<stdio.h>
void bubblesort(int[],int,int);
void swap(int[],int);
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
	bubblesort(a,n,0);
	printf("\n");
	printf("\n Sorted Array :");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		
	}
	return 0;
}
void bubblesort(int a[10],int n ,int i)
{
	int s=0,q;
	if(i<n-1)
	{
		if(s<n-i-1)
		{
			swap(a,0);
		}
		q=i++;		
	}
	
	bubblesort(a,n,q);
}
void swap(int a[10],int j)
{
	int temp,k;
	if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			    k=j++;
					
			}
			
		
			swap(a,k);
}