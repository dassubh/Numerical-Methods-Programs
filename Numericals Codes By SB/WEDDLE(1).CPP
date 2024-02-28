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
    float x0,xn,sum,h;
    int Ns=6,N;
    clrscr();
    printf("\n ENTER THE VALUE OF x0 AND xn");
    scanf("%f%f",&x0,&xn);
    printf("\n ENTER THE NO. OF STRIP");
    scanf("%d",&N);
     h=((xn-x0)/N)/Ns;
    sum=0.0;
    do
    {
     sum=sum+(3*h/10)*(f(x0)+5*f(x0+h)+f(x0+2*h)+6*f(x0+3*h)+f(x0+4*h)+5*f(x0+5*h)+f(x0+6*h));
     x0=x0+Ns*h;
    }while(x0<xn);
    printf("\n THE VALUE OF F(X) BY WEDDLE RULE IS = %f",sum);
    getch();
    }



