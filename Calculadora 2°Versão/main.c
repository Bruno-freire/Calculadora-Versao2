#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
	//declarando variaveis globais.
	char sn;
	int opcao, close=0, controle=0, encerrar=0, i=0, parou=0;
	float x, y, resultado=0, historico[999];
	//criando a fun��o que vou utilizar na maior parte do tempo
void Calculadora(){
	printf("--------------------------------------------|||||||CALCULADORA|||||||--------------------------------------------------- \n");
	printf("\t\t\t\t\t\tValor atual: %.2f \nEscolha; \n\n1 para SOMAR		2 para SUBTRAIR		3 para MULTIPLICAR	4 para DIVIDIR		5 para Zerar\n\n6 para acessar historico	7 para encerrar\n\n", resultado);
	scanf(" %d", &opcao);
	switch(opcao)
	{
		case 1:
		{
			system("cls");
			//aplicando condi��o para ter controle de se utilizar resultado anterior ou n�o.
			if(controle==0)
			{
				//controle igual a 0 entao resultado = 0
				printf("-------------------------------------\nDIGITE OS NUMEROS DA SOMA; ");
				scanf(" %f", &x);
				system("cls");
				printf("-------------------------------------\nDIGITE OS NUMEROS DA SOMA; %.2f+", x);
				scanf(" %f", &y);
				resultado=x+y;
				//se o resultado for um numero inteiro entao mostrar sem os zeros apos a virgulas.
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n \n");
					scanf(" %c", &sn);	
    	       		
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
										
				}
			}
			//controle >0 entao utilizar resultado anterior.
			else
			{
				printf("-------------------------------------\nDIGITE O NUMERO DA SOMA; %.2f+", resultado);
				scanf(" %f", &y);
				resultado=resultado+y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
    	       		printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
				}
			}
			parou++;
			i++;
			historico[i]=resultado;
			break;
		}
		case 2:
		{
			system("cls");
			if(controle==0)
			{
				printf("-------------------------------------\nDIGITE OS NUMEROS DA SUBTRA��O; ");
				scanf(" %f", &x);
				system("cls");
				printf("-------------------------------------\nDIGITE OS NUMEROS DA SUBTRA��O; %.2f-", x);
				scanf(" %f", &y);
				resultado=x-y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
    	       		
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
										
				}
			}
			else
			{
				printf("-------------------------------------\nDIGITE O NUMERO DA SUBTRA��O; %.2f-", resultado);
				scanf(" %f", &y);
				resultado=resultado-y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
    	       		printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
				}
			}
			parou++;
			i++;
			historico[i]=resultado;
			break;
		}
		case 3:
		{
			system("cls");
			if(controle==0)
			{
				printf("-------------------------------------\nDIGITE OS NUMEROS DA MULTIPLICA��O; ");
				scanf(" %f", &x);
				system("cls");
				printf("-------------------------------------\nDIGITE OS NUMEROS DA MULTIPLICA��O; %.2f*", x);
				scanf(" %f", &y);
				resultado=x*y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
    	       		
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
										
				}
			}
			else
			{
				printf("-------------------------------------\nDIGITE O NUMERO DA MULTIPLICA��O; %.2f*", resultado);
				scanf(" %f", &y);
				resultado=resultado*y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
    	       		printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);
				}
				else
				{
					printf("\nRESULTADO = %.2f\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
				}
			}
			parou++;
			i++;
			historico[i]=resultado;
			break;
		}
		case 4:
		{
			system("cls");
			if(controle==0)
			{
				printf("-------------------------------------\nDIGITE OS NUMEROS DA DIVIS�O; ");
				scanf(" %f", &x);
				system("cls");
				printf("-------------------------------------\nDIGITE OS NUMEROS DA DIVIS�O; %.2f/", x);
				scanf(" %f", &y);
				if(y==0)
				{
					printf("N�o � possivel dividir por 0.\n");
					system("pause");
					break;
				}
				resultado=x/y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
    	       		
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
										
				}
			}
			else
			{
				y=0;
				printf("-------------------------------------\nDIGITE O NUMERO DA DIVIS�O; %.2f/", resultado);
				scanf(" %f", &y);
				if(y==0)
				{
					printf("N�o � possivel dividir por 0.\n");
					system("pause");
					break;
				}
				resultado=resultado/y;
				if(fmod(resultado, 2)==0)
				{
    	       		printf("\nRESULTADO = %.0f\n\n", resultado);
    	       		printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);
				}
				else
				{
					printf("\nRESULTADO = %.2f\n\n", resultado);
					printf("Voc� quer continuar com o resultado anterior? s/n\n");
					scanf(" %c", &sn);	
				}
			}
			parou++;
			i++;
			historico[i]=resultado;
			break;
		}
		case 5:
		{
			resultado=0;
			close++;
			system("cls");
			//adicionando valor 'a' em ascii para sn nao ser entendido com invalido.
			sn=65;
			controle=0;
			break;
		}
		case 6:
		{
			printf("\t\t\t\t\t|||||||HISTORICO|||||||");
			for(i=0;i<=parou;i++)
			{
				printf("\n%.2f\n", historico[i]);
			}
			system("pause");
			system("cls");
			Calculadora();
			parou++;
			i++;
			historico[i]=resultado;
			break;
		}
		case 7:
		{
			close++;
			encerrar++;
			break;
		}
		default:
		{
			printf("Op��o invalida.\n");
			opcao=0;
			close++;
			system("pause");
			system("cls");
			break;
		}
	}
}
 //fun��o principal
int main(int argc, char *argv[]) 
{
	//adicionado dicionario portugues.
	setlocale(LC_ALL, "portuguese");
	i=0;
	historico[i]=0;
	do
	{
		close=0;
		encerrar=0;
		Calculadora();
		while(close==0)
		{
			system("cls");
			switch(sn)
			{
				case 's':
				{
					//adicionar valor ao encerrar para quebrar o while principal.
					system("cls");
					controle++;
					Calculadora();
					break;
				}
				case 'n':
				{
					
					controle=0;
					system("cls");
					resultado=0;
					Calculadora();
					break;
				}
				case 'a':
				{
					close++;
					break;
				}
				default:
				{
					printf("op��o invalida.\n");
					close++;
					opcao=0;
					sn=64;
					system("pause");
					system("cls");
					break;
				}
			}
		}
		
		//colocando uma forma de nao bugar ao ser digitado op��es invalidas.
	}while(encerrar==0);
	return 0;
}
