#include <stdio.h>
void der(int co[], int po[], int d)
{

	int c[1000];
	int e[1000];
	for(int i=0;i<d;i++)
	{
			if(po[i]==0)
		{
			e[i]=0;
			c[i]=0;
			continue;
		}
		c[i]=co[i]*po[i];
	
        e[i]=po[i]-1;		
	}
	for(int i=0;i<d;i++)
	{
		printf("%dx^%d",c[i],e[i]);
		if(i!=d)
		{
			printf("+ ");
		}
	}
}
int main()
{
		printf("DERIVATIVE\n\n");
int m,n,c,d,f,e;
printf("Power should be within the range of -10 to 10\n");
printf("Enter highest power of polynomial ");
scanf("%d",&n);
printf("Enter lowest power of polynomial ");
scanf("%d",&m);

	d=0-m;
	d=d+1;
	d=d+n;
int a[d];
int b[d];
int i;
if(m>=-10||n<=10)
{
	while(1)
{
	if(n<m)
	{
		break;
	}
	a[i]=n;
   // printf("%d\n",a[i]);
	n--;
	i++;
}
c=sizeof(a)/sizeof(int);
printf("Enter coefficients\n");
for(int j=0;j<d;j++)
{
	printf("x ^ %d= ",a[j]);
	scanf("%d",&b[j]);
}
der(b,a,d);
}
else
{
printf("Invalid value");	
}
}



