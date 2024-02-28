#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x,float y)
 {
    float f;
    f=((y-x)*(y+x));
    return f;
    }

 void main()
  {
    float x0,y0,xn,y1,h;
    clrscr();
    printf("\n ENTER THE STARTING VALUE OF x AND y\t");
    scanf("%f%f",&x0,&y0);
    printf("\n ENTER THE VALUE OF x AT WHICH y IS  REQUIRRED\t");
    scanf("%f",&xn);
    printf("\n ENTER THE STEP SIZE\t");
    scanf("%f",&h);
    printf("\n\n\t\t\t*****EULRS METHOD****\n\n");
    printf("\n\t\t------------------------------------------\n");
    printf("\n\t\tx\t\t\tf(x)\t");
      printf("\n\t\t-----------------------------------------\n");
    do
    {
      printf("\n\t\t%f\t\t%f",x0,y0);
      y1=y0+(h*f(x0,y0));
      x0=x0+h;
      y0=y1;
      }while(x0<=xn);
    printf("\nTHE VALUE OF Y=%f AT X=%f",y0,x0);
    getch();
    }