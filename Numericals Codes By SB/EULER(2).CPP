#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x,float y)
 {
    float f;
    f=(3*pow(x,3)*y)/5;
    return f;
    }

 void main()
  {
    float x0,y0,xn,y1,h;
    clrscr();
    printf("\n ENTER THE STARTING VALUE OF x AND y");
    scanf("%f%f",&x0,&y0);
    printf("\n ENTER THE VALUE OF x AT WHICH y IS  REQUIRRED");
    scanf("%f",&xn);
    printf("\n ENTER THE STEP SIZE");
    scanf("%f",&h);
    do
    {
      printf("\nTHE VALUE OF y=%f AT x=%f",y0,x0);
      y1=y0+(h*f(x0,y0));
      x0=x0+h;
      y0=y1;
      }while(x0<=xn);
    getch();
    }