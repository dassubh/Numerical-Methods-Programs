#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k;
	float X, x[10],y[10],d[10][10],sum,prod,h;
	clrscr();
	printf("\nENTER THE NO. OF POINTS:\t");
	scanf("%d",&n);
	printf("\nENTER THE VALUE OF X AT WHICH Y IS REQUIRRED:\t");
	scanf("%f",&X);
	for(i=1;i<=n;i++)
	{
		printf("\nENTER THE VALUE OF x AND y\t");
		scanf("%f%f",&x[i],&y[i]);
	}
	 h=x[2]-x[1];
	 for(i=1;i<=n;i++)
	    {
	       for(j=1;j<=n-i;j++)
		 {
			for(k=1;k<=n-i;k++)
			 {
			  if(j==1)
			   d[k][j]=y[k+1]-y[k];
			    else
			       d[k][j]=d[k+1][j-1]-d[k][j-1];
			}
		 }
	}
	printf("\n\t\t****NEWTONS FORWARD INTERPOLATION****\n");
	printf("\n\t\t-------------------------------------\n");
	printf("\n\t\t---------*DIFFERENCE TABLE*---------\n");
	printf("\n\n\tx\tf(x)\t\t\t\tDy\n");
	printf("\n-------------------------------------------------------------------\n");
	for(i=1;i<=n;i++)
	{
		printf("\n\n %f\t%f\t",x[i],y[i]);
	       for(j=1;j<=n-i;j++)
		 {
		 printf("%f   ",d[i][j]);
	}
	}
	printf("\n-------------------------------------------------------------------\n");
	 sum=y[1];
	 for(i=1;i<=n-1;i++)
	  {
	     prod=d[1][i];
	      for(j=1;j<=i;j++)
		prod*=(X-x[j])/(j*h);
		sum+=prod;
	     }
	 printf("\n\nAT GIVEN X=%f\tf(x)=%f",X,sum);
	 getch();
	}







