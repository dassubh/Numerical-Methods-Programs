#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x,float y)
 {
    float f;
    f=((y-x)/(y+x));
    return f;
    }

 void main()
  {
    float x0,y0,xn,x1,y1,y11,y12,e,h;
    clrscr();
    printf("\n ENTER THE STARTING VALUE OF x AND y\t");
    scanf("%f%f",&x0,&y0);
    printf("\n ENTER THE VALUE OF x AT WHICH y IS  REQUIRRED\t");
    scanf("%f",&xn);
    printf("\n ENTER THE STEP SIZE\t");
    scanf("%f",&h);
    printf("\n ENTER CORRECTION\t");
    scanf("%f",&e);
    y1=y0+h*(f(x0,y0));
    x1=x0+h;
    do
    {
      printf("\nTHE VALUE OF y=%f AT x=%f",y0,x0);
       y11=y0+(h*(f(x0,y0)+f(x1,y1)))/2.0;
       do{
	   y1=y11;
	   y12=y0+(h*(f(x0,y0)+f(x1,y11)))/2.0;
      }while(fabs(y1-y11)>e);
       x0=x0+h;
       y0=y12;
    }while(x0<=xn);
    getch();
    }