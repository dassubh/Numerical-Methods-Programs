#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
  clrscr();
  printf("\n ENTER THE ROW AND COLUMN OF THE 1ST MATRIX\t");
  scanf("%d %d",&m,&n);
  printf("\n ENTER THE ROW AND COLUMN OF THE 2ND MATRIX\t");
  scanf("%d %d",&q,&p);
  if(n!=q)
  {
    printf("\n MATRIX MULTIPLICATION IS NOT POSSIBLE\t");
    exit(0);
  }
  else
  {
    printf("\n MATRIX MULTIPLICATION IS POSSIBLE\t");
    printf("\n INPUT THE 1ST MATRIX \t");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
	scanf("%d",&a[i][j]);
       }
    }
    printf("\n INPUT THE 2ND MATRIX \t");
    for(i=0;i<q;i++)
    {
      for(j=0;j<p;j++)
      {
	scanf("%d",&b[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
     for(j=0;j<p;j++)
       {
	  c[i][j]=0;
	  for(k=0;k<n;k++)
	   c[i][j]=c[i][j]+a[i][k]*b[k][j];
	  }
       }
     }
     printf("\n THE 1ST MATRIX  IS\n");
     for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
	{
	printf(" %d\t",a[i][j]);
       }
       printf("\n");
      }
      printf("\n THE 2ND MATRIX  IS\n");
      for(i=0;i<q;i++)
       {
	 for(j=0;j<p;j++)
	 {
		printf(" %d\t",b[i][j]);
       }
	 printf("\n");
      }
      printf("\n THE RESULTANT MATRIX  IS\n");
      for(i=0;i<m;i++)
       {
	for(j=0;j<p;j++)
	 {
		printf(" %d\t",c[i][j]);
       }
       printf("\n");
      }
      getch();
      }



