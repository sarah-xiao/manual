#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int transer_1(char x)
{	
	int y =  0;
	if ('0'<= x && '9'>= x)
	{
		y = x - '0';
	}
	if ('a' <= x && 'f'>= x)
	{
		y = x - 'a' + 10;
	}
	if('A' <= x && 'F' >= x)
	{
		y = x - 'A' + 10;
	}
	return y;
}
int transer_2(char cargv[])
{
	if(cargv == NULL || 10 != strlen(cargv)){
		printf("the cargv wrong");
		exit(0);
	}
	int temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0;
	temp1  = transer_1(cargv[9]) + transer_1(cargv[8])*16 ;
	temp2  = transer_1(cargv[7]) + transer_1(cargv[6])*16 ;
	temp3  = transer_1(cargv[5]) + transer_1(cargv[4])*16 ;
	temp4  = transer_1(cargv[3]) + transer_1(cargv[2])*16 ;	

	printf("%d.%d.%d.%d \r\n",temp4,temp3,temp2,temp1);
}
int main(int iargc, char *cargv[])
{
	if(iargc != 2){
		fprintf(stderr,"usage: %s<domain nae or dotted-decimal>\n",
			cargv[0]);
		exit(0);
	}
	transer_2(cargv[1]);		
}
