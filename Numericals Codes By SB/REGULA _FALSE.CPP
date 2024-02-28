#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float fn;
    fn=pow(x,2)-x-4;
    return fn;
    }

 void main()
  {
    float x2,e,x1,x0;
    int k=0;
    clrscr();
    printf("\n ENTER THE DESIRED ACCURACY");
    scanf("%f",&e);
    do
    {
    printf("\n ENTER THE VALUE OF X0 AND X1\t");
     scanf("%f%f",&x0,&x1);
    }while(f(x0)*f(x1)>0.0);
    do
    {
       x2=x0-((f(x0)*(x1-x0))/(f(x1)-f(x0)));
       if(f(x0)*f(x2)<0.0)
	 x1=x2;
	 else
	   x0=x2;
	   k++;
    }while(fabs(f(x2))>e);
    printf("\n THE ROOT IS = %f",x2);
    printf("\n THE NO. OF ITERATION IS = %d",k);
    getch();
    }








