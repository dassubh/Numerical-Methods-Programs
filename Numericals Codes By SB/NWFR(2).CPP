#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k;
	float X, x[10],y[10],d[10][10],sum,prod,h;
	clrscr();
	printf("\n\nEnter the value of n and X:\t");
	scanf("%d%f",&n,&X);
	printf("\nEnetr the values of xi and yi n times\n\n");
	for(i=1;i<=n;i++)
	{
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
       for(i=1;i<=n;i++)
       {
	       for(j=1;j<=n-i;j++)
		 {
		   printf("\n x[%d]:%f\ty[%d]:%f\tdy[%d]:%f",i,x[i],i,y[i],i,d[i][j]);
	       }
	}
	 sum=y[1];
	 for(i=1;i<=n-1;i++)
	  {
	     prod=d[1][i];
	      for(j=1;j<=i;j++)
		prod*=(X-x[j])/(j*h);
		sum+=prod;
	 }
	 printf("\n\nX\t\tsum\n");
	 printf("%f\t%f",X,sum);
	 getch();
	}







