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
    float x[15],e;
    int k=0;
    clrscr();
    printf("\n ENTER THE INITIAL VALUE");
    scanf("%f",&x[0]);
    printf("\n ENTER THE DESIRED ACCURACY");
    scanf("%f",&e);
    do
    {
     x[k+1]=x[k]-((f(x[k])/df(x[k])));
     k=k+1;
     }while(fabs(x[k]-x[k-1])>=e);
    printf("\n THE ROOT IS = %f",x[k]);
    printf("\n THE NO. OF ITERATION REQURRIED IS = %d",k);
    getch();
    }








