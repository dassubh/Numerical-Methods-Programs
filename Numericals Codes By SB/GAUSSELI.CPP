#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
  {	int n,i,j,k;
	float a[10][10],r,d,x[10];
	//clrscr();
	printf("\nENTER THE VALUE OF n:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {  for(j=1;j<=n+1;j++)
	       {     printf("\na[%d][%d]=",i,j);
		     scanf("%f",&a[i][j]);
	       }
	  }
	for(k=1;k<=n-1;k++)
	  {   for(i=k+1;i<=n;i++)
		{   r=a[i][k]/a[k][k];
		    for(j=1;j<=n+1;j++)
			 a[i][j]=a[i][j]-r*a[k][j];
		}
	  }
	x[n]=a[n][n+1]/a[n][n];
	for(k=n-1;k>=1;k--)
	  {    x[k]=a[k][n+1];
	       for(j=k+1;j<=n;j++)
		    x[k]=x[k]-a[k][j]*x[j];
	       x[k]=x[k]/a[k][k];
	  }
	for(i=1;i<=n;i++)
		printf("\nx[%d]=%f",i,x[i]);
	getch();
  }
