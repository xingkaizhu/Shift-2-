#include<stdio.h>
int main()
{  int i;
	int a[100],b[100];
	int j,k,l,m,n;
	scanf("%d",&j);
	scanf("%d",&k);
	scanf("%d",&l);
	for(i=0;i<j;i++)
	{
		scanf ("%d",&a[i]);	
	}
	
     if(l==1)
	{ 
	  for(i=0;i<k;i++)
	  b[j-k+i]=a[i];
	  for(i=k;i<j;i++)
	  b[i-k]=a[i];	
	  }
	if (l==0)
	{
		for(i=0;i<(j-k);i++)
		b[i+k]=a[i];
		for(i=j-k;i<j;i++)
		b[i+k-j]=a[i];
	}
	
	for(i=0;i<j-1;i++)
	printf ("%d ",b[i]);
	printf("%d",b[j-1]);
	
	return 0;
}
