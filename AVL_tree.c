#include <stdio.h>
#include <stdlib.h>


struct node{
	int key;
	struct node *left;
	struct node *right;
	struct node *father;
	int balance;
	
}


struct node* __init_node(){
	return (struct node*)malloc(sizeof(struct node));
}

void insertion (struct node* root, struct node* no){
	struct node* tmp = root;
	//searching for a place to insert the leaf
	while(tmp->left != NULL || tmp->right != NULL){	
		if(no->key > tmp->key)
			tmp = tmp->right;
		else
			tmp = tmp->left; 
	}
	if(no->key > tmp->key)
		tmp->right = no
	else
		tmp->left = no;

	//updating the balance
	no->balance = 0;

	while(tmp->father != NULL) //compute balance	 
	
}

void simple_rotation(struct node *root){
	
}

int node_height(struct node *no){

	if(no == NULL) return -1;
	
	int right_height = node_height(no->right);
	int left_height = node_height(no->left);		
	
	if(right_height > left_height)
		return right_height + 1;
	else
		return left_height + 1;	

}

void double_rotation(struct node *root);


int main(){
	//iteradores
	int i,j,q;

	



}
