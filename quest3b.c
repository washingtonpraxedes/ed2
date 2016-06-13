#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char *name,*complement;
	int age,cep,num;
	struct node *next;
}node;

node * __init_node(){
	char *n = (char*)malloc(20*sizeof(char));
	char *c = (char*)malloc(20*sizeof(char));
	struct node *no = (node*)malloc(sizeof(struct node));
	no->name = n;
	no->complement = c;
	no->age=0; no->cep = 0; no-> num = 0;
	no->next = NULL;
	return no;
}

int main(){
	//iteradores
	int i,j,q;

	//inicializando raiz
	struct node *root = __init_node();
	root->name = "raiz";
	root->age = 10000;
	struct node *tmp = __init_node();
	root->next=tmp;

	//preenchendo os demais nós
	for(i=1;i<100000;i++){
		tmp->name = "tt";
		tmp->age = i;
		struct node *aux = __init_node();
		tmp->next = aux;
		tmp = aux;
	}


	//obtendo tempos de pesquisa	


	return 0;
}
