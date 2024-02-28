#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float fn;
   //fn=exp(x)*cos(x)-1.2;
   fn=3*x-cos(x)-1;
    return fn;
    }
 float df(float x)
  {
    float fn;
   // fn=exp(x)*(cos(x)-sin(x));
    fn=3+sin(x);
    return fn;
    }


   void fun(float x0,int k,float e)
   {
    float x1;
     x1=x0-(f(x0)/df(x0));
     printf("\n\nk\tx0\t\tf(x0)\t\tdf(x0)\t\tx1\t");
     printf("\n---------------------------------------------------------------\n");
     printf("\n\n %d\t%f\t%f\t%f\t%f\t",k,x0,f(x0),df(x0),x1);
     while(fabs(x1-x0)>=e)
     {
       k++;
       x0=x1;
       x1=x0-(f(x0)/df(x0));
       printf("\n\n %d\t%f\t%f\t%f\t%f\t",k,x0,f(x0),df(x0),x1);
      }
      printf("\n---------------------------------------------------------------\n");
      printf("\n\n APPROXIMATE ROOT IS : %f",x1);
      printf("\n\n THE NO. OF ITERATION IS : %d",k);
    }
    void main()
    {
     clrscr();
     float x0,e;
     int k=0;
    printf("\n ENTER THE INITIAL VALUE:\t");
    scanf("%f",&x0);
    printf("\n ENTER THE DESIRED ACCURACY:\t");
    scanf("%f",&e);
    printf("\n\n\t\t****NEWTON RAPHSON****\n");
    printf("\n\t\t--------------------------\n");
    fun(x0,e,k);
    getch();
    }





