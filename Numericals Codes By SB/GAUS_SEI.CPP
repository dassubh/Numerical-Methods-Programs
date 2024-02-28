#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
  {	int n,i,j,k,it=0;
	float a[10][10],r,d,x[10],y[10];
	clrscr();
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {  for(j=1;j<=n+1;j++)
	       {     printf("\na[%d][%d]=",i,j);
		     scanf("%f",&a[i][j]);
	       }
	  }
	for(i=1;i<=n;i++)
	  {	x[i]=0;
		y[i]=0;
	   }
	step1 : it++;
	for(i=1;i<=n;i++)
	  {	x[i]=a[i][n+1];
		for(j=1;j<=n;j++)
		  {	if(i==j)
			    continue;
			x[i]=x[i]-a[i][j]*x[j];
		  }
		x[i]=x[i]/a[i][i];
		for(k=1;k<=n;k++)
			{ if(fabs(x[k]-y[k])>0.0005)
				{   printf("\n\nIteration=%d\n\n",it);
				    for(i=1;i<=n;i++)
					{ 	y[i]=x[i];
						printf("\nx[%d]=%f",i,x[i]);
					 }
				    goto step1;
				}
			}
		printf("\nFinal result reached.");
	  }
	  getch();
   }
