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
    int Ns=1,N;
    clrscr();
    printf("\n ENTER THE VALUE OF x0 AND xn");
    scanf("%f%f",&x0,&xn);
    printf("\n ENTER THE NO. OF STRIP");
    scanf("%d",&N);
     h=((xn-x0)/N)/Ns;
    sum=0.0;
    do
    {
     sum=sum+(h/2)*(f(x0)+f(x0+h));
     x0=x0+Ns*h;
    }while(x0<xn);
    printf("\n THE VALUE OF F(X) BY TRAPEZOIDAL RULE IS = %f",sum);
    getch();
    }


