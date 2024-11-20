#include<stdio.h>
#include<string.h>
int main()
{
	char c[100];
    char a[1000][1000],b[100][100],d[100][100];
	char v[1000];
	char u[1000];
	int e=0,pn=0; 
    int x,p,y,z,e1=0,pn1=0;
	int coeff[1000],po[1000],co[100],powe[100];
printf("RESTRICTIONS:\n\n");
	printf("1.ALWAYS PLACE COEFFICIENT WITH X (even in case of 1 for example (1x^2)"
	"\n\n2.WRITE POLYNOMIAL IN SUCH A WAY 2 DIGITS ''COEFFx^1'' DIGIT POWER(22X^2) OR 2 DIGIT POWER(22X^10)"
	"\n\n3.SINGLE DIGITS IN PLACE OF POWER AND COEFFICIENT CAN WORK TOO(3X^3)\n\n");
printf(" Enter equation : ");
    scanf("%s",&c);
    int l=strlen(c);

    for(int i=0;i<l;i++)
    {
    	if(c[i]=='/')
    	z=1;
    	else if(c[i]=='*')
    	z=2;
	}
	switch (z)
	{
		case 1:
			{
				int j=0 ,ctr=0;
    // breaking string where "*" sign ccmes
	for(int i=0;i<=(strlen(c));i++)
    {   
     if(c[i]=='/'||(c[i]=='\0'))
        {
        	
            a[ctr][j]='\0';
            ctr++;  
            j=0;
			
        }
        else
        {
            a[ctr][j]=c[i];
            j++;
        }
    }
    
    // breaking first polynomial
  int l1=strlen(a[0]);
    for(int i=0;i<l1;i++)
 {
	u[i]=a[0][i];
 } 
 //breaking second polynomial
 int l2=strlen(a[1]);
 for(int i=0;i<l2;i++)
 {
	v[i]=a[1][i];
 } 
//printf("%s\n",u);
// printf("%s",v);
 j=0;
 int cnt=0;
   for(int i=0;i<=(strlen(u));i++)
    {   
     if(u[i]=='+'||(u[i]=='\0'))
        {
        	
            b[ctr][j]='\0';
            cnt++;  
            j=0;
			
        }
        else
        {
            b[cnt][j]=u[i];
            j++;
        }
    }
     j=0 ;
	int cot=0;
	for(int i=0;i<=(strlen(v));i++)
    {   
     if(v[i]=='+'||(v[i]=='\0'))
        {
        	
            d[cot][j]='\0';
            cot++;  
            j=0;
			
        }
        else
        {
            d[cot][j]=v[i];
            j++;
        }
    }
   
// finding derivative for u
for(int i=0;i<cnt;i++)
{
	if(strlen(b[i])==4)
		   {
		   	
		   	co[e]=(int)(b[i][0]-'0');
		   	powe[pn]=(int)(b[i][3]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	co[e]=co[e]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	//printf("(%dx^%d)",co[e],powe[pn]);
		   	e++;
		   	pn++;
		   }
			if(strlen(b[i])==5)
			{
				
			co[e]=((int)(b[i][0]-'0')*10)+(int)(b[i][1]-'0');
			powe[pn]=(int)(b[i][4]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			co[e]=co[e]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	//printf("(%dx^%d)",co[e],powe[pn]);
		   	e++;
		   	pn++;
			}
			if(strlen(b[i])==6)
			{
		
			co[e]=((int)(b[i][0]-'0')*10)+(int)(b[i][1]-'0');
			powe[pn]=((int)(b[i][4]-'0')*10)+(int)(b[i][5]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			co[e]=co[e]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	//printf("(%dx^%d)",co[e],powe[pn]);
		   	e++;
		   	pn++;
			}
						
}   
//finding derivative for v

for(int i=0;i<cot;i++)
{
	if(strlen(d[i])==4)
		   {
		   	
		   	coeff[e1]=(int)(d[i][0]-'0');
		   	po[pn1]=(int)(d[i][3]-'0');
		   	//printf("%d  %d\n",coeff[e1],po[pn1]);
		   	coeff[e1]=coeff[e1]*po[pn1];
		   	po[pn1]=po[pn1]-1;
		   	//printf("(%dx^%d)",coeff[e1],po[pn1]);
		   	e1++;
		   	pn1++;
		   }
			if(strlen(d[i])==5)
			{
				
			coeff[e1]=((int)(d[i][0]-'0')*10)+(int)(d[i][1]-'0');
			po[pn1]=(int)(d[i][4]-'0');
			//printf("%d  %d\n",coeff[e1],po[pn1]);
			coeff[e1]=coeff[e1]*po[pn1];
		   	po[pn1]=po[pn1]-1;
		   	//printf("(%dx^%d)",coeff[e],po[pn1]);
		   	e1++;
		   	pn1++;
			}
			if(strlen(d[i])==6)
			{
			coeff[e1]=((int)(d[i][0]-'0')*10)+(int)(d[i][1]-'0');
			po[pn1]=((int)(d[i][4]-'0')*10)+((int)(d[i][5]-'0'));
			//printf("%d  %d\n",coeff[e1],po[pn1]);
			coeff[e1]=coeff[e1]*po[pn1];
		   	po[pn1]=po[pn1]-1;
		   	//printf("(%dx^%d)",coeff[e],po[pn1]);
		   	e1++;
		   	pn1++;
			}						
}   
printf("DIVISION RULE\n");
for(int i=0;i<e;i++)
{
	printf("(%dx^%d)",co[i],powe[i]);
}
   printf("(%s)",v);
   printf("-");
printf("(%s)",u);
for(int i=0;i<e1;i++)
{
	printf("(%dx^%d)",coeff[i],po[i]);
}  

printf("/(%s)^2",v);   

break;				
			}
	case 2:
	{
	int j=0 ,ctr=0;
    // breaking string where "*" sign ccmes
	for(int i=0;i<=(strlen(c));i++)
    {   
     if(c[i]=='*'||(c[i]=='\0'))
        {
        	
            a[ctr][j]='\0';
            ctr++;  
            j=0;
			
        }
        else
        {
            a[ctr][j]=c[i];
            j++;
        }
    }
    
    // breaking first polynomial
  int l1=strlen(a[0]);
    for(int i=0;i<l1;i++)
 {
	u[i]=a[0][i];
 } 
 //breaking second polynomial
 int l2=strlen(a[1]);
 for(int i=0;i<l2;i++)
 {
	v[i]=a[1][i];
 } 
//printf("%s\n",u);
// printf("%s",v);
 j=0;
 int cnt=0;
   for(int i=0;i<=(strlen(u));i++)
    {   
     if(u[i]=='+'||(u[i]=='\0'))
        {
        	
            b[ctr][j]='\0';
            cnt++;  
            j=0;
			
        }
        else
        {
            b[cnt][j]=u[i];
            j++;
        }
    }
     j=0 ;
	int cot=0;
	for(int i=0;i<=(strlen(v));i++)
    {   
     if(v[i]=='+'||(v[i]=='\0'))
        {
        	
            d[cot][j]='\0';
            cot++;  
            j=0;
			
        }
        else
        {
            d[cot][j]=v[i];
            j++;
        }
    }
   
// finding derivative for u
for(int i=0;i<cnt;i++)
{
	if(strlen(b[i])==4)
		   {
		   	
		   	co[e]=(int)(b[i][0]-'0');
		   	powe[pn]=(int)(b[i][3]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	co[e]=co[e]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	//printf("(%dx^%d)",co[e],powe[pn]);
		   	e++;
		   	pn++;
		   }
			if(strlen(b[i])==5)
			{
				
			co[e]=((int)(b[i][0]-'0')*10)+(int)(b[i][1]-'0');
			powe[pn]=(int)(b[i][4]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			co[e]=co[e]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	//printf("(%dx^%d)",co[e],powe[pn]);
		   	e++;
		   	pn++;
			}
			if(strlen(b[i])==6)
			{
		
			co[e]=((int)(b[i][0]-'0')*10)+(int)(b[i][1]-'0');
			powe[pn]=((int)(b[i][4]-'0')*10)+(int)(b[i][5]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			co[e]=co[e]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	//printf("(%dx^%d)",co[e],powe[pn]);
		   	e++;
		   	pn++;
			}
						
}   
//finding derivative for v

for(int i=0;i<cot;i++)
{
	if(strlen(d[i])==4)
		   {
		   	
		   	coeff[e1]=(int)(d[i][0]-'0');
		   	po[pn1]=(int)(d[i][3]-'0');
		   	//printf("%d  %d\n",coeff[e1],po[pn1]);
		   	coeff[e1]=coeff[e1]*po[pn1];
		   	po[pn1]=po[pn1]-1;
		   	//printf("(%dx^%d)",coeff[e1],po[pn1]);
		   	e1++;
		   	pn1++;
		   }
			if(strlen(d[i])==5)
			{
				
			coeff[e1]=((int)(d[i][0]-'0')*10)+(int)(d[i][1]-'0');
			po[pn1]=(int)(d[i][4]-'0');
			//printf("%d  %d\n",coeff[e1],po[pn1]);
			coeff[e1]=coeff[e1]*po[pn1];
		   	po[pn1]=po[pn1]-1;
		   	//printf("(%dx^%d)",coeff[e],po[pn1]);
		   	e1++;
		   	pn1++;
			}
			if(strlen(d[i])==6)
			{
			coeff[e1]=((int)(d[i][0]-'0')*10)+(int)(d[i][1]-'0');
			po[pn1]=((int)(d[i][4]-'0')*10)+((int)(d[i][5]-'0'));
			//printf("%d  %d\n",coeff[e1],po[pn1]);
			coeff[e1]=coeff[e1]*po[pn1];
		   	po[pn1]=po[pn1]-1;
		   	//printf("(%dx^%d)",coeff[e],po[pn1]);
		   	e1++;
		   	pn1++;
			}						
}
printf("PRODUCT RULE\n");   
for(int i=0;i<e;i++)
{
	printf("(%dx^%d)",co[i],powe[i]);
}
   printf("(%s)",v);
   printf("+");
   printf("(%s)",u);
for(int i=0;i<e1;i++)
{
	printf("(%dx^%d)",coeff[i],po[i]);
}  

    	
	}	
		
		
		
	}
       
   
   
   
   
   
   
   
   
    

}




