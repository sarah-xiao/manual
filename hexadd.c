#include <stdlib.h>
#include <stdio.h>

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
int main(int iagrc, char *cagrv[])
{
	printf("iagrc = %d\r\n",iagrc);
	printf("cagrv = %s\r\n",cagrv[1]);

	int y = 0;
	y = transer_1(*cagrv[1]);
	printf("y = %d \r\n",y);
}
