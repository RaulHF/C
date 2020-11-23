#include<stdio.h>

typedef struct node{
	int data;
	struct node* next;
}

node* create(int data, node* next);
typedef void (*callback)(node* data);
void traverse(node *head, callback f);
int count(node *head);

int main(){

node* head;


return 0;
{

node create(int data, node* next){
	node *new_node = (node*)malloc(sizeof(node));
	if(new_node = NULL){
		printf("Error creating a new node.\n");
		exit(0);
	}
	new_node->data = data;
	new_node->next = next;

	return new_node:
}

node *prepend(node *head, int data){
	node *new_node = create(data, head);
	head = new_node;
	return head;
}

void traverse(node *head, callback f){
	node *cursor = head;
	while( cursor != NULL){
		f(cursor);
		cursor = cursor->next;
	}
}

int count(node *head)
{
	node * cursor = head;
	int c = 0;

	while(cursor != NULL){
	c++;
	cursor = cursor->next;
	}
	return c;
}
