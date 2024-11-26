#include<stdio.h>
void bubblesort1st(int[],int,int);
void bubblesort2nd(int[],int,int,int);
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
	bubblesort1st(a,n,0);
	printf("\n");
	printf("\n Sorted Array :");
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
		
	}
	return 0;
}
void bubblesort1st(int a[10],int n,int i)
{
	int t;
	
	if(i<n-1)
	{
		bubblesort2nd(a,i,n,0);
	}
	t=i+1;
	
	bubblesort1st(a,n,t);
}
void bubblesort2nd(int a[10],int s,int n,int j)
{
	int p=0,temp;
	printf("\n ho666e");
	     if(n-s-1){
		 
	        if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				//flag=1;
				p=j+1;
			}
				bubblesort2nd(a,s,n,p);
			}
}