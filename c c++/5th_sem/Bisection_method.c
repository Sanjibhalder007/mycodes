#include<stdio.h>
#include<math.h>
float function(float);
float bisectionMethod(int,int);
int main()
{
    int xp,xn;
    float root;
    printf("\n Enter negetive & positive value of x:");
    scanf("%d%d",&xn,&xp);
    root=bisectionMethod(xn,xp);
    printf("\n Root of the equation=%f",root);
    return 0;
}

float bisectionMethod(int xn,int xp)
{
    float n,p,xi,fx,xpre,xnext;
    n=xn;
    p=xp;
    xi=(n+p)/2;
    int i=1;
    printf("\n SNO|NEGETIVE|POSITIVE|FUNCTION|XI\n");
    do 
    {
        printf("\n|%d|%.6f|%.6f|",i,n,p);
        fx=function(xi);
        if(fx>0)
        {
            p=xi;
        }
        else{
            n=xi;
        }
        printf("%.6f|%.6f|",fx,xi);
        xpre=xi*1000;
        xi=(n+p)/2;
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