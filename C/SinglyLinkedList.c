#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	
	int nodeData;
	struct Node *next;
	
};

struct Node *createNode(int data) {
	
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> nodeData = data;
	temp -> next = NULL;
	
	return temp;
	
}

struct Node *head = NULL;
struct Node *tail = NULL;

void addNode(int data) {
	
	struct Node *newNode = createNode(data);
	
	if (head == NULL) {
		
		head = newNode;
		tail = newNode;
		
	}
	else {
		
		tail -> next = newNode;
		tail = newNode;
		
	}
	
}

void display() {
	
	struct Node *current = head;
	
	if (head == NULL) {
		
		printf("List is empty.\n");
		return;
		
	}
	
	printf("Nodes of singly linked list: ");
	
	while (current != NULL) {
		
		printf("%d ", current -> nodeData);
		current = current -> next;
		
	}
	
	printf("\n");
	
}

int main(void) {
	
	addNode(1);
	addNode(2);
	addNode(3);
	addNode(4);
	
	display();
	
}
