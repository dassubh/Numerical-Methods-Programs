#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x,float y)
  { float f;
    f=((x*x)-1)*y*y;
    return f;
  }
 void main()
  { int i,n;
    float x[20],y[20],h,yp,yc;
    clrscr();
    printf("\n\nENTER THE VALUE OF n AND h:\t");
    scanf("%d%f",&n,&h);
    printf("\n\nENTER THE VALUE OF x0 AND y0:\t");
    scanf("%f %f",&x[0],&y[0]);
    printf("\n\n\t\t****PRDICTOR CORRECTOR METHOD****\n\n");
    printf("\n\t\t----------------------------------\n\n");
    printf("\n\t\tAT x\t\ty\t");
    printf("\n\t\t---------------------------\t");
    for(i=0;i<=2;i++)
     {    x[i+1]=x[i]+h;
	  y[i+1]=y[i]+h*f(x[i],y[i]);
	   printf("\n\t\t%f\t%f",x[i+1],y[i+1]);
     }
    for(i=3;i<=n;i++)
      {    x[i+1]=x[i]+h;
	   yp=y[i-3]+(4*h*(2*f(x[i-2],y[i-2])-f(x[i-1],y[i-1])+2*f(x[i],y[i]))/3);
	   yc=y[i-1]+(h*(f(x[i-1],y[i-1])+4*f(x[i],y[i])+f(x[i+1],yp))/3);
	   while(fabs(yp-yc)>0.0005)
	    {  yp=yc;
	       yc=y[i-1]+(h*(f(x[i-1],y[i-1])+4*f(x[i],y[i])+f(x[i+1],yp))/3);
	    }
	   y[i+1]=yp;
	   printf("\n\t\t%f\t%f",x[i+1],y[i+1]);
      }
      printf("\n\t\t---------------------------\t");
    getch();
  }

