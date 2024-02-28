#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float f;
    f=1/(1+x);
    return f;
    }

 void main()
  {
    float x0,xn,sum,h,p;
    int n,i,ns=2;
    clrscr();
    printf("\n ENTER THE LOWER RANGE\t");
    scanf("%f",&x0);
    printf("\n ENTER THE LOWER RANGE\t");
    scanf("%f",&xn);
    printf("\n ENTER THE NO. OF STRIP\t");
    scanf("%d",&n);
    h=((xn-x0)/n)/ns;
    sum=0.0;
    p=x0;
    for(i=1;i<=n;i++)
    {
       sum=sum+(h/3)*(f(x0)+4*f(x0+h)+f(x0+2*h));
       x0=x0+ns*h;
     }
     printf("\n\n\t ****NUMERICAL INTEGRAION USING SIMPSONS 1/3RD RULE IS****\n");
      printf("\n\t------------------------------------------------------------\n");
     gotoxy(30,20);
     printf("\n\t\t %d",(int)xn);
     printf("\n\t\t %c",(char)244);
     printf("\n\t\t  1/(1+x) = %f",sum);
     printf("\n\t\t %c",(char)245);
     printf("\n\t\t %d\n",(int)p);
     getch();
    }