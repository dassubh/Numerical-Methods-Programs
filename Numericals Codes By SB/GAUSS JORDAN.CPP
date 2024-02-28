#include<stdio.h>
#include<conio.h>
#include<math.h>


 void main()
  {
    float a[4][4],fact;
    int i,j,k,n;
    clrscr();
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
      for(k=0;k<=n-1;k++)
      {
	 fact=a[k][k];
	 for(j=0;j<=n;j++)
	  {
	     a[k][j]=a[k][j]/fact;
	     }
	      for(i=0;i<=n-1;i++)
	      {
	       if(i!=k)
	       {
		fact=a[i][k];
		for(j=0;j<=n;j++)
		{
		 a[i][j]=a[i][j]-fact*a[k][j];
		 }
		}
	      }
	  }
	  printf("\n\n CONVERTED MATRIX IS\n");
	  printf("------------------------\n");
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
	  printf("x[%d]=%f\n",i,a[i][n]);
    }
      getch();
	}
