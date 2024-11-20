#include<stdio.h>
#include<string.h>

// lnx^2+2ln1x^2+2ln1x+ln3x^2+2ln3x^2
int main()
{
	printf("RESTRICTIONS:\n\n");
	printf("1.ALWAYS PLACE COEFFICIENT WITH X (even in case of 1 for example (1x^2)"
	"\n\n2.WRITE POLYNOMIAL IN SUCH A WAY 2 DIGITS ''COEFFx^1'' DIGIT POWER(22X^2) OR 2 DIGIT POWER(22X^10)"
	"\n\n3.SINGLE DIGITS IN PLACE OF POWER AND COEFFICIENT CAN WORK TOO(3X^3)"
	"\n\n4.WRITE POLYNOMIAL EQUATION FIRST THAN WRIT ANY TRANSCEDENTAL FUNCTION YOU DESIRE"
	"\n\n5.WRITE ALL EQUATIONS INVOLVING POLYNOMIALS IN BRACKETS\n"
	"\nEXAMPLE=(4x^2)+(30x^2)+(10x^10)+ln(1x^2)+ln(15x^10)+e^(1x^2)+e^(22x^2)+sin(2x^4)+cos(22x^4)+tan(10x^10)\n\n ");
	
    char c[100];
    char a[10][10];
	int coeff[1000],po[1000],co[100],powe[100];
	int d=0,pn=0; 
    int i,j,ctr,x,p,y,z;
    printf(" ENTER EQUATION : ");
    fgets(c, sizeof c, stdin);	
    int l=strlen(c);
    //c[l-2]='\0';
    // (x^2)+ln(1x^2)+(3x)
    //ln(20x^2)+ln(1x^2)+ln(15x^10)+(3x)
	//(x^2)+ln(1x^2)+(3x)
	// e^(1x^2)+e^(22x^2)+e^(10x^10)+(3x)
	//(4x^2)+(30x^2)+(10x^10)+ln(1x^2)+ln(15x^10)+e^(1x^2)+e^(22x^2)+sin(2x^4)+cos(22x^4)+tan(10x^10)//
//Breaking words into strings
    j=0; ctr=0;
    for(i=0;i<=(strlen(c));i++)
    {   
     if(c[i]==')'||(c[i]=='\0'))
        {
        	
            a[ctr][j]='\0';
            ctr++;  
            j=0;
            i++;
			
        }
        else
        {
            a[ctr][j]=c[i];
            j++;
        }
    }
    
    for(int i=0;i<ctr-1;i++)
	{
		int l1=strlen(a[i]);
		printf("\nterm %d\n",i+1);
//		printf("%s\n",a[i]);
	
		if(a[i][0]=='l')
		{
			if(strlen(a[i])==7)
		   {
		   	
		   	co[d]=(int)(a[i][3]-'0');
		   	powe[pn]=(int)(a[i][6]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d/%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
		   }
			if(strlen(a[i])==8)
			{
				
			co[d]=((int)(a[i][3]-'0')*10)+(int)(a[i][4]-'0');
			powe[pn]=(int)(a[i][7]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d/%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
			if(strlen(a[i])==9)
			{
		
			co[d]=((int)(a[i][3]-'0')*10)+(int)(a[i][4]-'0');
			powe[pn]=((int)(a[i][7]-'0')*10)+(int)(a[i][8]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d/%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
			
		}
		else if( a[i][0]=='e')
		{
			if(strlen(a[i])==7)
		   {
		   	
		   	co[d]=(int)(a[i][3]-'0');
		   	powe[pn]=(int)(a[i][6]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d)e^(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
		   }
			if(strlen(a[i])==8)
			{
				
			co[d]=((int)(a[i][3]-'0')*10)+(int)(a[i][4]-'0');
			powe[pn]=(int)(a[i][7]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d)e^(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
			if(strlen(a[i])==9)
			{
		
			co[d]=((int)(a[i][3]-'0')*10)+(int)(a[i][4]-'0');
			powe[pn]=((int)(a[i][7]-'0')*10)+(int)(a[i][8]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d)e^(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
			
		}
		else if(a[i][0]=='s' && a[i][1]=='i' && a[i][2]=='n')
	  {
		
		if(strlen(a[i])==8)
		{
			co[d]=(int)(a[i][4]-'0');
		   	powe[pn]=(int)(a[i][7]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*cos(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
		}
		if(strlen(a[i])==9)
			{	
			co[d]=((int)(a[i][4]-'0')*10)+(int)(a[i][5]-'0');
			powe[pn]=(int)(a[i][8]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*cos(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
		if(strlen(a[i])==10)
			{
		
			co[d]=((int)(a[i][4]-'0')*10)+(int)(a[i][5]-'0');
			powe[pn]=((int)(a[i][8]-'0')*10)+(int)(a[i][9]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*cos(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}	
	}
	else if(a[i][0]=='c' && a[i][1]=='o' && a[i][2]=='s')
	{
		
		if(strlen(a[i])==8)
		{
			co[d]=(int)(a[i][4]-'0');
		   	powe[pn]=(int)(a[i][7]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*-sin(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
		}
		if(strlen(a[i])==9)
			{	
			co[d]=((int)(a[i][4]-'0')*10)+(int)(a[i][5]-'0');
			powe[pn]=(int)(a[i][8]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*-sin(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
		if(strlen(a[i])==10)
			{
		
			co[d]=((int)(a[i][4]-'0')*10)+(int)(a[i][5]-'0');
			powe[pn]=((int)(a[i][8]-'0')*10)+(int)(a[i][9]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*-sin(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}	
	}
	else if(a[i][0]=='t' && a[i][1]=='a' && a[i][2]=='n')
	{
		
		if(strlen(a[i])==8)
		{
			co[d]=(int)(a[i][4]-'0');
		   	powe[pn]=(int)(a[i][7]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*sec^2(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
		}
		if(strlen(a[i])==9)
			{	
			co[d]=((int)(a[i][4]-'0')*10)+(int)(a[i][5]-'0');
			powe[pn]=(int)(a[i][8]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*sec^2(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
		if(strlen(a[i])==10)
			{
		
			co[d]=((int)(a[i][4]-'0')*10)+(int)(a[i][5]-'0');
			powe[pn]=((int)(a[i][8]-'0')*10)+(int)(a[i][9]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			coeff[d]=co[d];
		   	po[pn]=powe[pn];
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d%)*sec^2(%dx^%d)",co[d],powe[pn],coeff[d],po[pn]);
		   	d++;
		   	pn++;
			}
	}
	else
	{
		if(strlen(a[i])==5)
		   {
		   	
		   	co[d]=(int)(a[i][1]-'0');
		   	powe[pn]=(int)(a[i][4]-'0');
		   	//printf("%d  %d\n",co[d],powe[pn]);
		   	co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d)",co[d],powe[pn]);
		   	d++;
		   	pn++;
		   }
			if(strlen(a[i])==6)
			{
				
			co[d]=((int)(a[i][1]-'0')*10)+(int)(a[i][2]-'0');
			powe[pn]=(int)(a[i][5]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d)",co[d],powe[pn]);
		   	d++;
		   	pn++;
			}
			if(strlen(a[i])==7)
			{
		
			co[d]=((int)(a[i][1]-'0')*10)+(int)(a[i][2]-'0');
			powe[pn]=((int)(a[i][5]-'0')*10)+(int)(a[i][6]-'0');
			//printf("%d  %d\n",co[d],powe[pn]);
			co[d]=co[d]*powe[pn];
		   	powe[pn]=powe[pn]-1;
		   	printf("(%dx^%d)",co[d],powe[pn]);
		   	d++;
		   	pn++;
			}	
	}
}
}
