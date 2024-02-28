#include<stdio.h>
#include<conio.h>

float f(float x)
{
  float fn;
  fn=1.0/(1.0+x);
  return fn;
  }

  void main()
  {
    float x0,xn,h,sum;
    int n,ns;
    clrscr();
    printf("\n ENTER THE LOWER AND UPPER LIMIT OF X\t");
    scanf("%f%f",&x0,&xn);
    printf("\n ENTER THE NO. OF STEPS\t");
    scanf("%d",&n);
    ns=2;
    h=((xn-x0)/n)/ns;
    sum=0.0;
    do{
      sum=sum+(h/3)*(f(x0)+4*f(x0+h)+f(x0+2*h));
      x0=x0+ns*h;
      }while(x0<xn);
      printf("\nAREA= %f",sum);
      getch();
      }



