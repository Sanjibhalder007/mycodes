#include<stdio.h>
#include<math.h>
float function(float);
float function2(float);
float NewtonRaphson(int,int);
int main()
{
    int xp,xn;
    float root;
    printf("\n Enter negetive & positive value of x:");
    scanf("%d%d",&xn,&xp);
    root=NewtonRaphson(xn,xp);
    printf("\n Root of the equation=%f",root);
    return 0;
}

float NewtonRaphson(int xn,int xp)
{
    float n,p,xi,fx,fx2,h,xpre,xnext;
    n=xn;
    p=xp;
    xi=(n+p)/2;
    int i=1;
    printf("\n SNO|  XI  | F(XI) | F'(XI) |   H   |  H+I  |  XI   |\n");
    do 
    {
        
        fx=function(xi);
        fx2=function2(xi);
        h=-fx/fx2;
        printf("\n| %d |%.6f|%.6f|%.6f|%.6f",i,xi,fx,fx2,h);
        xpre=xi*1000;
        xi=xi+h;
        printf("|%.6f|",xi);
        xnext=xi*1000;
        xpre=round(xpre);
        xnext=round(xnext);
        i++;
        printf("\n__________________________________________");

    }while(xpre!=xnext);
    return(xi);
}
float function(float xi)
{
    return(xi*xi*xi-xi-7);
}
float function2(float xi)
{
    return(3*xi*xi-1);
}