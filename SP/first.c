#include<stdio.h>

int main()
{
	FILE *f;
	char c1[1000],ch;
	int p=0;
	char MOT [9][100]={"STOP","ADD","SUB","MULT","MOVER","MOVEM","COMP","BC","DIV"};
	char POT [5][100]={"START","END","LTORG","EQU","ORIGIN"};
	char REG [4][4]={"AREG","BREG","CREG","DREG"};
	char DS [2][3]={"DC","DS"};
	char COM [6][2]={"LT","LE","EQ","GT","GE","ANY"};

	int POOLTAB [10];
	

	f=fopen("co.txt","r");
	while(fscanf(f,"%c",&ch)!=EOF)
	{
		
		if(ch==' ')
		{
			c1[p++]='\0';
		/*if(strcmp("BREG",c1)==0)
		{
			printf("HI");
		}*/
			int i=0;
			for(i=0;i<4;i++)
			{
				if(strcmp(REG[i],c1)==0)
				{
					printf("RE %d ",i );
					goto ravi;
				}
			}
			for(i=0;i<9;i++)
			{
				if(strcmp(MOT[i],c1)==0)
				{
					printf("MO %d ",i );
					goto ravi;
				}
			}
			for(i=0;i<5;i++)
			{
				if(strcmp(POT[i],c1)==0)
				{
					printf("PO %d ",i );
					goto ravi;
				}
			}
			
			for(i=0;i<2;i++)
			{
				if(strcmp(DS[i],c1)==0)
				{
					printf("DS %d ",i );
					goto ravi;
				}
			}
			for(i=0;i<6;i++)
			{
				if(strcmp(COM[i],c1)==0)
				{
					printf("CO %d ",i );
					goto ravi;
				}
			}
			printf("Syntax error ");
			printf("->");
			printf("<-");
			ravi:
			{
				
				p=0;
			}
		}
		
		else
		{
			c1[p++]=ch;
		}
		

	}
	
}
