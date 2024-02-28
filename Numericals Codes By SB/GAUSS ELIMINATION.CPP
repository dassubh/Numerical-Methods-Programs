#include<stdio.h>
#include<conio.h>
#include<math.h>


int main()
  {
    float a[4][4],u,sum,x[4];
    int i,j,k,n;
    //clrscr();
    printf("\n ENTER THE ORDER OF MATRIX\n");
    scanf("%d",&n);
    printf("\n");
    printf("\n ENTER THE REQUIRRED MATRIX VALUE\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<=n;j++)
	{
	  scanf("%f",&a[i][j]);

       }
     }
     printf("\n\n THE AUGMENTED MATRIX IS\n");
     for(i=0;i<n;i++)
      {
	for(j=0;j<=n;j++)
	 {
	   printf("%f\t",a[i][j]);
       }
	  printf("\n");
      }
      for(i=0;i<n;i++)
      {
	x[i]=0;
       }
      for(k=0;k<n-1;k++)
      {
	 if(a[k][k]==0)
	  {
		printf("\n DIVISION BY ZERO.BREAK\n");
		break;
	 }
	 for(i=k+1;i<n;i++)
	  {
	     u=a[i][k]/a[k][k];
	      for(j=k;j<n+1;j++)
		a[i][j]=a[i][j]-(u*a[k][j]);
	   }
       }
       x[n-1]=((a[n-1][n])/(a[n-1][n-1]));
       for(i=n-2;i>=0;i--)
       {
	  sum=0;
	  for(j=i+1;j<n;j++)
	  sum=sum+a[i][j]*x[j];
	  x[i]=(a[i][n]-sum)/(a[i][i]);
	  }
	  printf("\n\n AFTER PIVOTING REDUCED MATRIX IS\n");
	  printf("--------------------------------------\n");
  for(i=0;i<n;i++)
    {
      for(j=0;j<=n;j++)
	{
	  printf("%f\t",a[i][j]);
    }
     printf("\n");
     }
     for(i=0;i<n;i++)
    {
	  printf("x[%d]=%f\n",i,x[i]);
    }
      getch();
	}
