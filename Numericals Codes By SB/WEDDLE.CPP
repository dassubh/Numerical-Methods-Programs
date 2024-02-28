#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float f;
    f=x*x;
    return f;
    }

 void main()
  {
    float x0,xn,sum,h,p;
    int n,i,ns=6;
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
       sum=sum+(3*h/10)*(f(x0)+5*f(x0+h)+f(x0+2*h)+6*f(x0+3*h)+f(x0+4*h)+5*f(x0+5*h)+f(x0+6*h));
       x0=x0+ns*h;
     }
     printf("\n\n\t ****NUMERICAL INTEGRAION USING WEDDLE RULE****\n");
     printf("\n\t--------------------------------------------------------\n");
     gotoxy(30,20);
     printf("\n\t\t %d",(int)xn);
     printf("\n\t\t %c",(char)244);
     printf("\n\t\t  x2 = %f",sum);
     printf("\n\t\t %c",(char)245);
     printf("\n\t\t %d\n",(int)p);
     getch();
    }