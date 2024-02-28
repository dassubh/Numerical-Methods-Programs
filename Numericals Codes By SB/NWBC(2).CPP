#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,k;
	float X,x[5],y[5],d[10][10],sum,prod,h,u;
	clrscr();
	printf("\n\nENTER THE VALUE OF n AND X:\t");
	scanf("%d%f",&n,&X);
	for(i=1;i<=n;i++)
	  {
		printf("\nENTER THE VALUES OF xi AND yi %d TIMES:",n);
		scanf("%f%f",&x[i],&y[i]);
	  }
	 h=x[2]-x[1];
	 u=(X-x[n])/h;
	 for(i=1;i<=n;i++)
	    {
	       for(j=1;j<=n-i;j++)
		 {
			for(k=i+1;k<=n;k++)
			 {
			  if(j==1)
			   d[k][j]=y[k]-y[k-1];
			    else
			       d[k+1][j]=d[k+1][j-1]-d[k][j-1];
			}
		 }
	}
	 for(j=1;j<=n;j++)
	  {
	      printf("\n%f\t%f\t",x[j],y[j]);
	       for(i=j+1;i<=n;i++)
		 {
		   printf("\n%f   ",d[i][j]);
	       }
	}
	 sum=y[n];
	 for(i=1;i<=n-1;i++)
	  {
	     prod=d[n][i];
	      for(j=1;j<=i;j++)
		prod*=(u+j-1)/j;
		sum+=prod;
	 }
	 printf("\n\nX\t\tSUM\n");
	 printf("%f\t%f",X,sum);
	 getch();
	}







