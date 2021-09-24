#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "Comunica.h"

int main(int argc, char *argv[]) 
{
	char stTemp[255];
	char stIp[16];
	int Porta = 0;

	memset(&stIp, 0, sizeof(stIp));
	printf("Digite o IP do servidor: ");
	fflush(stdin);
	gets(stIp);
	printf("Digite a porta do servidor: ");
	fflush(stdin);
	scanf("%d", &Porta);
	printf("\n");
	
	while(1)
	{
		memset(&stTemp, 0, sizeof(stTemp));
		printf(">");
		fflush(stdin);
		gets(stTemp);
		envia_udp(stIp, Porta, stTemp, strlen(stTemp));
	}
	
	
	return 0;
}
