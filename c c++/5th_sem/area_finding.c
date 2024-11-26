#include<stdio.h>
#include<math.h>
float function(float);
float simpson(int,int,int);
float trapezoidal(int,int,int);

int main()
{
    int ul,ll,n;
    float areas,areat;
    printf("\n Enter ul,ll & n:");
    scanf("%d%d%d",&ul,&ll,&n);
    areas=simpson(ul,ll,n);
    printf("\n Area using Simpson Method:%f",areas);
    areat=trapezoidal(ul,ll,n);
    printf("\n Area using trapezoidal Method:%f",areat);
    return 0;
}

float simpson(int ul, int ll,int n)
{
    float h,y[10],x,even=0,odd=0,area;
    int l,i=0;
    l=ul-ll;
    h=(float)l/n;
    x=ll;
    while(x<=ul)
    {
        y[i]=function(x);
        x=x+h;
        i++;
    }
    i=1;
    while (i<n)
    {
        if(i%2==0)
        {
            even=even+y[i];
        }
        else
        {
            odd=odd+y[i];
        }
        i++;
    }
    
    area=((h/3)*((y[0]+y[n]+4*even+2*odd)));
    return(area);
    
}
float trapezoidal(int ul, int ll,int n)
{
    float h,y[10],x,area;
    int l,i=0,sum=0;
    l=ul-ll;
    h=(float)l/n;
    x=ll;
    while(x<=ul)
    {
        y[i]=function(x);
        x=x+h;
        i++;
    }
    i=1;
    while (i<n)
    {
        sum=sum+y[i];
        i++;
    }
    
    area=((h/2)*((y[0]+y[n])+2*sum));
    return (area);
}

float function(float x)
{
    float z;
    z=3*x*x+2*x+5;
    return z;
}