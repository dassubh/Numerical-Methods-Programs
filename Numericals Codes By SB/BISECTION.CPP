#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float f;
    //f=pow(x,3)-pow(cos(x),2);
    f=x*exp(x)-1;
    return f;
    }

 void main()
  {
    float x,e,a,b;
    int k=0;
    clrscr();
    printf("\n ENTER THE DESIRED ACCURACY:\t");
    scanf("%f",&e);
    do
    {
    printf("\n ENTER THE VALUE OF a AND b:\t");
    scanf("%f%f",&a,&b);
    }while(f(a)*f(b)>=0.0);
    printf("\n\nn\ta\t\tb\t\txn+1\t\tf(xn+1)\t");
    printf("\n\n%d\t%f\t%f\t%f\t%f\t",k,a,b,((a+b)/2.0),f((a+b)/2.0));
    do
    {
       x=(a+b)/2.0;
       if(f(a)*f(x)<0.0)
	 b=x;
	 else
	   a=x;
	   k++;
       printf("\n\n%d\t%f\t%f\t%f\t%f\t",k,a,b,((a+b)/2.0),f((a+b)/2.0));

    }while(fabs(b-a)>e);
    printf("\n THE ROOT IS = %f",x);
    printf("\n THE NO. OF ITERATION IS = %d",k);
    getch();
    }








