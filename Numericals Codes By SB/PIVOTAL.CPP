#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
  {	int n,i,j,k;
	float a[10][10],r,d;
	clrscr();
	printf("\nENTER THE VALUE OF n:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {  for(j=1;j<=n;j++)
	       {     printf("\na[%d][%d]=",i,j);
		     scanf("%f",&a[i][j]);
	       }
	  }
	for(k=1;k<=n-1;k++)
	  {   for(i=k+1;i<=n;i++)
		{   r=a[i][k]/a[k][k];
		    for(j=1;j<=n;j++)
			 a[i][j]=a[i][j]-r*a[k][j];
		}
	  }
	d=1;
	for(i=1;i<=n;i++)
		d=d*a[i][i];
	printf("\n\nTHE VALUE OF DETERMINANT IS %f",d);
	getch();
  }
