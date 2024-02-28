#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
 {
    float f;
    f=pow(x,3)+1;
    return f;
    }

 void main()
  {
    float a,b,I,A,B;
    clrscr();
    printf("\n ENTER THE VALUE OF a AND b");
    scanf("%f%f",&a,&b);
    B=(b-a)/2.0;
    A=(b+a)/2.0;
    I=B*(f(A-B/sqrt(3.0))+f(A+B/sqrt(3.0)));
    printf("\n\nB=(b-a)/2\t A=(b+a)/2");
    printf("\n\n B=%f\t A=%f",B,A);
    printf("\n\n THE FORMULAE IS :");
     printf("I=B*(f(A-B/sqrt(3.0))+f(A+B/sqrt(3.0)))");
    printf("\n\n THE VALUE F(x)[I] BY GAUSS LEGENDRE QUADRATURE FORMULAE IS= %f",I);
    getch();
    }



