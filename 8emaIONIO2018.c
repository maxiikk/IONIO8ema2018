#include <stdlib.h>
#include <stdio.h>

struct node{
	char value1;
	char value2;
	int value3;
	struct node *next;
	
};

typedef struct node nodet;

nodet *createnewnode (){
	char val;
	int val1;
	nodet *result = malloc(sizeof(nodet));
	printf("Give me a character for the first value:\n");
	scanf(" %c", &val);
	result->value1 = val;
	printf("Give me a character for the second value:\n");
	scanf(" %c", &val);
	result->value2 = val;
	printf("Give me an integer for the third value:\n");
	scanf(" %i", &val1);
	result->value3 = val1;
	result->next = NULL;
	return result;
}
void printlist (nodet *tail){
	nodet *temp = tail;
	while (temp != NULL){
		printf("%c , %c , %i\n", temp->value1, temp->value2, temp->value3);
		temp = temp->next;
	}
}
int main (){
	nodet *tail = NULL;
	char ans = 'n';
	char val;
	int val1;
	nodet *temp;
	tail = temp;
	printf("Give me a character for the first value:\n");
	scanf(" %c", &val);
	temp->value1 = val;
	printf("Give me a character for the second value:\n");
	scanf(" %c", &val);
	temp->value2 = val;
	printf("Give me an integer for the third value:\n");
	scanf(" %i", &val1);
	temp->value3 = val1;
	temp->next = NULL;
	printf("Do you want to stop?y/n");
	scanf(" %c", &ans);
	ans = tolower(ans);
	nodet *temp2;
	while (ans != 'y'){
		temp2 = createnewnode();
		temp2->next = temp;
		temp = temp2;
		tail = temp;
		printf("Do you want to stop?y/n");
		scanf(" %c", &ans);
		ans = tolower(ans);
	}
	printlist(tail);
	
	return 0;
}
