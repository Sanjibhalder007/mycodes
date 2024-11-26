#include<stdio.h>
void Quicksort(int[],int,int);
int Partition(int[],int,int);
int main ()
{
int a[10],n,i;
printf("\n enter length of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
	printf("\n enter array element:");
	scanf("%d",&a[i]);
	}	
	printf("\n Aray output is: ");
	for(i=0;i<n;i++)
    {
	
	printf("%4d",a[i]);
	}
	Quicksort(a,0,n);
	printf("\n Sorted Array:");
	for(i=0;i<n;i++)
    {
	
	printf("%4d",a[i]);
	}
	return 0;
}

void Quicksort(int a[10],int low,int high)
{
	int j;
	if(low<high)
	{
		j=partition(a,low,high);
		Quicksort(a,low,j);
		Quicksort(a,j+1,high);
	}
	}

int partition(int a[10],int i,int j)
{
	int p,pvoid,temp;
	p=i;
	pvoid=a[p];
	while(i<j)
	{
		do
		{
		i++;
		}
		while(a[i]<=pvoid);
		do
		{
			j--;
		}
		while(a[j]>pvoid);
		if(i<j)
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;	
		}
	}
	temp=a[p];
	a[p]=a[j];
	a[j]=temp;
	return j;
}