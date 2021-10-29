#include<stdio.h>
int main(void)
{
	int a[100],n,i,j,b,choice;
printf("enter the number of values to be inserted\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("enter the value");
	scanf("%d",&a[i]);
}

printf("Which Search Operation Do you want to use\n");
printf("Click 1 for Ascending Order or 2 for Descending order\n");
scanf("%d",&choice);

if(choice==1)
{
	for(i=0;i<n;i++)
        {
	for(j=i+1;j<n;j++)
	{
	if(a[i]<a[j])
	{
		b=a[i];
		a[i]=a[j];
		a[j]=b;
	}
       }
      }
}
	
else
{
	for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
	if(a[i]>a[j])
	{
		b=a[i];
		a[i]=a[j];
		a[j]=b;
	}
}
}
}
	

for(i=0;i<n;i++)
printf("%d ",a[i]);
}


//sample o/p
//enter the number of values to be inserted5
//enter the value252
//enter the value78
//enter the value57
//enter the value09
//enter the value35
//252 78 57 35 9
