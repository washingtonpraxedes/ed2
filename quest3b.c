#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	double times[100];
	FILE *temp, *gnu;

	//inicializando a semente de GNA
	srand( (unsigned)time(NULL) );

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

	clock_t t;
	char *n;
	int time,s=1000;
	//obtendo tempos de pesquisa
	for(i=0;i<100;i++){
		printf("Indo de %d a %d...\n",i*1000,(i+1)*1000-1);
		for(q=0;q<100;q++){	
			tmp = root;
			time = (rand() % 1000) + (i*1000);
			t = clock();
			for(j=0;j<time;j++){			
				tmp = tmp->next;	
			}
			t = clock() - t;
			times[i] += ((double)t)/CLOCKS_PER_SEC;
		}
	}
	
	temp = fopen("data.txt","w");
	gnu = popen("gnuplot -persistent","w");

	for(i=0;i<100;i++){
		times[i] = times[i]/100.0;
		printf("Media do tempo %d: %lf seg\n",i,times[i]);
		fprintf(temp,"%d %lf\n",i,times[i]);	
	}
	fprintf(gnu,"set title \"ACESSOS À MEMÓRIA EM C NO LINUX\"\n");
	fprintf(gnu,"plot 'data.txt' with lines\n");	


	

	return 0;
}
