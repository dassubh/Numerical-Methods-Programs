#include<stdio.h>
#include<conio.h>
#include<math.h>
float f( float x,float y)
{
  float fn;
  fn=((1+x)*y*y)/2;
   //fn=(x+y);
  return fn;
 }
void main()
{
  float x0,y0,xn,y1,h,k,k1,k2,k3,k4;
  clrscr();
  printf("\n ENTER STARTING VALUE OF x AND y i.e. x0,y0");
  scanf("%f%f",&x0,&y0);
  printf("\n ENTER THE VALUE OF x AT WHICH y IS REQURRIED");
  scanf("%f",&xn);
  printf("\n ENTER THE STEP SIZE");
  scanf("%f",&h);
   printf("\n\t\tx\t\t\tf(x)");
   printf("\n\t----------------------");
  do{
    k1=h*f(x0,y0);
    k2=h*f(x0+h/2,y0+k1/2);
    k3=h*f(x0+h/2,y0+k2/2);
    k4=h*f(x0+h,y0+k3);
    k=(k1+2*k2+2*k3+k4)/6.0;
    y1=y0+k;
    printf("\n\t\t%f\t\t\t%f",x0,y0);
    y0=y1;
    x0=x0+h;
  }while(x0<=xn);
  getch();
  }
