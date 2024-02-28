#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>

float f(float x)
 {
    float fn;
   fn=exp(x)-3*x;
    return fn;
    }

 void main()
  {
    float x0,x1,x,e;
    int k=0;
    clrscr();
    printf("\n ENTER THE VALUE OF X0 AND X1");
    scanf("%f %f",&x0,&x1);
    printf("\n ENTER THE DESIRED ACCURACY");
    scanf("%f",&e);
     while(fabs(x1-x0)>=e)
    {
      //x0=x1;
      x=((x1*f(x0)-x0*f(x1))/(f(x0)-f(x1)));
      x0=x1;
      x1=x;
      k=k+1;
      }
    printf("\n THE ROOT IS = %f",x1);
    printf("\n THE NO. OF ITERATION REQURRIED IS = %d",k);
    getch();
    }








