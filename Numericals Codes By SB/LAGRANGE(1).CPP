#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
  {
    float x[15],y[15],X,sum,prod[15];
    int i,j,n;
    clrscr();
    printf("\n ENTER THE NO.OF POINTS\t");
    scanf("%d",&n);
    printf("\n ENTER THE VALUE OF X AT WHICH Y IS REQUIRRED\t");
    scanf("%f",&X);
    for(i=1;i<=n;i++)
    {
     printf("\n ENTER THE VALUE OF x AND y\t");
     scanf("%f%f",&x[i],&y[i]);
    }
    for(i=1;i<=n;i++)
    {
       prod[i]=1.0;
       for(j=1;j<=n;j++)
	{
	   if(j==i)
	     continue;
	      else
	       prod[i]=prod[i]*((X-x[j])/(x[i]-x[j]));
	 }
	 }
	 sum=0.0;
	 for(i=1;i<=n;i++)
	    sum=sum+(prod[i]*y[i]);
	 printf("\n\n\t\t****LAGRANGE INTERPOLATION****\n\n");
	 printf("\n\t\t---------------------------------\n\n");
	 printf("\n-----------------------------------------------------------------------------\n");
	 for(i=1;i<=n;i++){
	  printf("\tx%d\t",i);
	  }
	  printf("\tX\n");
	  printf("\n-----------------------------------------------------------------------------\n");
	     printf("\n\nx :: ");
	 for(i=1;i<=n;i++)
	  printf("%f\t",x[i]);
	  printf("%f\t",X);
	  printf("\n");
	  printf("\n\nf(x)::");
	  for(i=1;i<=n;i++)
	  printf("%f\t",y[i]);
	  printf("%f",sum);
	  printf("\n-----------------------------------------------------------------------------\n");	  getch();
	}
