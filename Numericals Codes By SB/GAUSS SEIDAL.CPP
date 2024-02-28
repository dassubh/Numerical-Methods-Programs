#include<stdio.h>
#include<conio.h>
#include<math.h>


 void main()
  {
    float a[5][5],x[5],b[5],e,X,s;
    int i,j,k,n,m;
    clrscr();
    printf("\n ENTER THE ORDER OF MATRIX\n");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<=n;i++)
    {
      for(j=0;j<=n;j++)
      {
	a[i][j]=0.0;
	b[i]=0.0;
	x[i]=0.0;
	}
      }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	 printf("\n ENTER THE ELEMENT a[%d][%d]",i,j);
	  scanf("\n%f",&a[i][j]);
	  printf("\n%f",a[i][j]);
       }
       printf("\n ENTER THE ELEMENT b[%d]",i);
	  scanf("\n%f",&b[i]);
	  printf("\n%f",b[i]);
       }
  for(i=0;i<n;i++)
    {
       printf("\n ENTER THE INITIAL GUESS VALUE x[%d]",i);
	  scanf("\n%f",&x[i]);
	  printf("\n%f",x[i]);
       }
       e=0;
       m=1;
       while(m<=10)
       {
	printf("%d",m);
	      for(i=0;i<n;i++)
	      {
	       s=0;
		for(j=0;j<n;j++)
		 {
		   if(i==j)
		   {
		   s=s+a[i][j]*x[j];
		 }
	      }
	      X=(b[i]-s)/a[i][i];
	      if(fabs(X-x[i])<e)
		 x[i]=X;
		    else
		    {
		     e=fabs(X-x[i]);
		       x[i]=X;
		       }
		    }
	if(e<0.0000001)
	{
	 for(i=0;i<n;i++)
	 {
	  printf("VALUE OF x[%d]=%f\t",i,x[i]);
    }
	  printf("%d  %f  %f  %f\n",m,x[1],x[2],x[3]);
    }
      getch();
      m=m+1;
      }
	}










