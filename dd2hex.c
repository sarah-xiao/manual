#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

int main(int iargc, char *cargv[])
{
	if(iargc != 2){
		fprintf(stderr,"usage: %s<domain nae or dotted-decimal>\n",
			cargv[0]);
		exit(0);
	}
	struct in_addr inp;
	memset(&inp,0,sizeof(struct in_addr));
	if(1== inet_aton(cargv[1],&inp)){
		unsigned long int ip;
		ip = ntohl(inp.s_addr);
		printf("0x%x",ip);
	}else{
		printf("error");
	}
}
