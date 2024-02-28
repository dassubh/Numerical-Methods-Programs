/* predictor-corrector method */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float f( float x,float y)
{
  float fn;
  //fn=((1+x)*y*y)/2;
   //fn=(x+6);
  return fn;
 }
void main()
{
  float x0,y0,x1,x2,y1,y2p,y2c,xn,h;
  clrscr();
  printf("\n ENTER STARTING VALUE OF x AND y i.e. x0,y0");
  scanf("%f%f",&x0,&y0);
  printf("\n ENTER THE VALUE OF x AT WHICH y IS REQURRIED");
  scanf("%f",&xn);
  printf("\n ENTER THE STEP SIZE");
  scanf("%f",&h);
  x1=x0+h;
  y1=y0+h*f(x0,y0);
  do{
    y2p=y0+2*h*f(x1,y1);
    x2=x1+h;
    y2c=y1+h*(f(x1,y1)+f(x2,y2p))/2.0;
    printf("\n THE VALUE OF y= %f at x= %f",y1,x1);
    x0=x1;
    y0=y1;
    x1=x0+h;
    y1=y2c;
  }while(x0<=xn);
  getch();
  }
