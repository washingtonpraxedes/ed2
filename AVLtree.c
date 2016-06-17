#include <stdio.h>
#include <stdlib.h>

struct node{
	int key;
	struct node *left;
	struct node *right;
	
}


struct node* __init_node(){
	return (struct node*)malloc(sizeof(struct node));
}

void insercao (struct node* root, struct node* no){
	struct node* tmp = root;
	while(tmp->left != NULL || tmp->right != NULL){	
		if(no->key > tmp->key)
			tmp = tmp->right;
		else
			tmp = tmp->left; 
	}
	if(no->key > tmp->key)
		tmp-right = no;
	else
		tmp->left = no;

}

void simple_rotation(struct node *root);

void double_rotation(struct node *root);

int node_height(struct node *no);

int main(){
	//iteradores
	int i,j,q;

	



}
