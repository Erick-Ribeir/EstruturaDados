#include <stdio.h>
#define MAX 10

typedef int tdado;

typedef struct{
	tdado pilha[MAX];
	int topo;
}tPilha;
//--------------------
void inicializa(tPilha *p){
	p->topo = -1;
}
//------------------------------------
int push(tPilha *p, tdado dado){
	if(p->topo == MAX-1) // cheio
		return 0;
	p->topo++;
	p->pilha[p->topo] = dado;	
	return 1;
}
//----------------------
tdado pop(tPilha *p){
	tdado removido = p->pilha[p->topo];
	p->topo--;
	return removido;
}

//-----------------------------------
//peek = olhar
tdado peek(tPilha p ){
	return p.pilha[p.topo];
}
//------------------------------------------
int isEmpty(tPilha p){
	if (p.topo == -1)
	  return 1; // vazia
	else
	  return 0;  
}
//--------------------
void mostraPilha(tPilha p){
	while(p.topo> -1){
		printf("%d |",p.pilha[p.topo]);
		p.topo--;
	}
	printf("\n");
}
//-------------------------
int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Peek (Olhar Topo)\n");
	printf("4-Convert 2-8 (Conversão da base)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------------
int main(){
	tPilha p1;
	inicializa(&p1);
	tdado dado;
	int op;
	do{
		op = menu(p1);
		switch(op){
			case 1: printf("Dado para pilha:");
					scanf("%d",&dado);
					if(push(&p1, dado)==1)
						printf("Inserido com sucesso \n");
					else
						printf("Stack Over Flow");
			break;
			case 2: if(!isEmpty(p1)){// se nao for vazio
						dado = pop(&p1);
						printf("Dado removido: %d\n",dado);
					}
					else
						printf("Pilha vazia\n");
			break;			
			case 3: if(!isEmpty(p1)){// se nao for vazio
						dado = peek(p1);
						printf("Dado: %d\n",dado);
					}
					else
						printf("Pilha vazia\n");
			break;	
			case 4: printf("Digite um numero\n");
					scanf(%d,int num);
					printf("Digite uma base entre 2-8 para conversão\n");
					scanf(%d,int base);
					if( num% int base){
						
					
				
			}			
		}//fim swich
		getch();//pausa
		system("cls");//limpa tela
	}
	while(op!=0);
	
}
