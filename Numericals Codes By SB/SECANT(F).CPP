#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float fn;
   fn=exp(x)-3*x;
    return fn;
    }

   void fun(float x0,float x1,float e,int k)
   {
    float x2;
    k++;
    x2=x0-((f(x0)*(x1-x0))/(f(x1)-f(x0)));
    printf("\n\n %d\t%f\t%f\t%f\t%f\t",k,x0,x1,x2,f(x2));
     x0=x1;
     x1=x2;
	 if(fabs(f(x2))>=e)
	     fun(x0,x1,e,k);
      else
       {
	 printf("\n---------------------------------------------------------------\n");
	 printf("\n\n APPROXIMATE ROOT IS : %f",x2);
	 printf("\n\n TOTAL NO. OF ITERATION IS : %d",k);
      }
    }
    void main()
    {
     clrscr();
     float x0,x1,e;
     int k=0;
    printf("\n ENTER THE VALUE OF XO\t");
    scanf("%f",&x0);
      printf("\n ENTER THE VALUE OF X1\t");
    scanf("%f",&x1);
    printf("\n ENTER THE DESIRED ACCURACY\t");
    scanf("%f",&e);
     printf("\n\n\t\t****SECANT METHOD****\n");
    printf("\n\t\t--------------------------\n");
    printf("\n\n k\tx0\t\tx1\t\tx2\t\tf(x2)");
   printf("\n---------------------------------------------------------------------\n");
    fun(x0,x1,e,k);
    getch();
    }





