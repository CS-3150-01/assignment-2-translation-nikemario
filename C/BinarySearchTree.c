#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	printf("Total number of possible Binary Search Trees with given key: %d", numOfBST(5));
	
	return 0;
	
}

struct Node {
	
	int nodeData;
	struct Node *left;
	struct Node *right;
	
};

struct Node *newNode(int data) {
	
	struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
	temp -> nodeData = data;
	temp -> left = NULL;
	temp -> right = NULL;
	
	return temp;
	
}

struct Node *root = NULL;

int fact(int num) {
	
	int fact = 1;
	
	if (num == 0) {
		return 1;
	}
	else {
		
		while (num > 1) {
			
			fact = fact * num;
			num--;
			
		}
		
		return fact;
		
	}
	
}

int numOfBST(int key) {
	
	int catalanNumber = fact(2 * key)/(fact(key + 1) * fact(key));
	return catalanNumber;
	
}
