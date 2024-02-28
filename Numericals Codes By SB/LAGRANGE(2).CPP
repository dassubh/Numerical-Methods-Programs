#include<stdio.h>
#include<conio.h>
#include<math.h>


 void main()
  {
    float x[15],y[15],X,sum,prod;
    int i,j,n;
    clrscr();
    printf("\n ENTER THE NO. OF POINTS\t");
    scanf("%d",&n);
    printf("\n ENTER THE VALUE OF X AT WHICH Y IS REQUIRRED\t");
    scanf("%f",&X);
    for(i=1;i<=n;i++)
    {
     printf("\n ENTER THE VALUE OF x and y\t");
     scanf("%f%f",&x[i],&y[i]);
    }
    sum=0.0;
    for(i=1;i<=n;i++)
    {
      prod=1.0;
      for(j=1;j<=n;j++)
      {
	if(j!=i)
	 prod=prod*((X-x[j])/(x[i]-x[j]));
	 }
	 sum=sum+(prod*y[i]);
	 }
       printf("\n THE VALUE AT %f is %f",X,sum);
	 getch();
	}
