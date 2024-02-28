#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>

float f(float x)
 {
    float fn;
   fn=pow(x,2)-3*x+2;
    return fn;
    }
 float df(float x)
 {
    float fn;
    fn=2*x-3;
    return fn;
    }

 void main()
  {
    float x0,x1,e;
    int k=0;
    clrscr();
    printf("\n ENTER THE INITIAL VALUE");
    scanf("%f",&x0);
    printf("\n ENTER THE DESIRED ACCURACY");
    scanf("%f",&e);
      x1=x0-(f(x0)/df(x0));
     while(fabs(x1-x0)>e)
    {
      k=k+1;
      x0=x1;
      x1=x0-(f(x0)/df(x0));
      }
    printf("\n THE ROOT IS = %f",x1);
    printf("\n THE NO. OF ITERATION REQURRIED IS = %d",k);
    getch();
    }








