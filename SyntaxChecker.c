#include<stdio.h>
#include<string.h>
main()
{
	FILE *fp;
	char strg[50];
	char ch;
	int curo,curc,lono,lonc,floc,floo,line,built,vdf,prf,scf;
	curo=curc=lono=lonc=floc=floo=line=built=vdf=prf=scf=0;
	if(fp = fopen("14_ArrayEvenOdd.c", "r"))
	{
		while ((ch=getc(fp))!= EOF)
		{
			fgets(strg,49,fp);
			//puts(strg);
			if(strstr(strg,"\n"))
			{
				line++;
			}
			if((strstr(strg,"main("))||(strstr(strg,"printf("))||(strstr(strg,"scanf("))||(strstr(strg,"gets("))||(strstr(strg,"puts("))
			||(strstr(strg,"strcpy("))||(strstr(strg,"strlen("))||(strstr(strg,"strcmp("))||(strstr(strg,"stricmp("))||(strstr(strg,"strcat("))
			||(strstr(strg,"strstr("))||(strstr(strg,"isalpha("))||(strstr(strg,"isdigit("))||(strstr(strg,"isupper("))||(strstr(strg,"islower(")))
			{
				built++;
			}
			
			
			if(strstr(strg,"("))
			{
				curo++;
			}
			
			if(strstr(strg,")"))
			{
				curc++;
			}
			if(strstr(strg,"{"))
			{
				floo++;
			}
			if(strstr(strg,"}"))
			{
				floc++;
			}
				if(strstr(strg,"["))
			{
				lono++;
			}
			if(strstr(strg,"]"))
			{
				lonc++;
			}
			if(strstr(strg,"void("))
			{
				vdf++;
			}
			if(strstr(strg,"printf("))
			{
				prf++;
			}
			if(strstr(strg,"scanf("))
			{
				scf++;
			}
			
		/*	if((getc(fp))==' ')
			{
				printf("line\n");
			
			}
			*/
		}
		
			printf("\nTotal no of printf() functions %d",prf);
			printf("\nTotal no of scanf() functions %d",scf);
			printf("\nTotal no of void() functions %d",vdf);
			printf("\nno of lines %d\n",line);
			//printf("no of keywords %d\n",key);
			printf("no of Builtin Functions %d\n",built);
			
			if(curo==curc)
			{
				printf("Curve braces are closed perfectly\n");
			}
			else
			{
				printf("Curve braces are not closed perfectly\n");
			}
			if(floo==floc)
			{
				printf("Flower braces are closed perfectly\n");
			}
			else
			{
				printf("Flower braces are not closed perfectly\n");
			}
			if(lono==lonc)
			{
				printf("Long braces are closed perfectly\n");
			}
			else
			{
				printf("Long braces are not closed perfectly\n");
			}
			
	}
	
	else
	{
		printf("Error opening file\n");
	}
	fseek (fp, 0L, 0);
		
	fclose(fp);
	
}
