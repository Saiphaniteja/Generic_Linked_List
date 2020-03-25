#include "linkedListLibrary.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*
dataNode *createNode(void *inputData)
{
	dataNode *tempNode = (dataNode *)malloc(sizeof(dataNode));
	if(inputData != NULL)
	{
	tempNode->data = inputData;
	tempNode->next = NULL;
	}
	else {
		printf("Input Data is null");
	}
	return tempNode;
}
*/

retValue addNode(gLinkedList *headNode, void *input) {
	retValue status = FAILURE;
	if (NULL != input) {
		if ((headNode) == NULL) {
			printf("head is null \n");
			headNode = (struct gLinkedList*)malloc(sizeof(struct gLinkedList*));
			(headNode)->data = input;
			headNode->next = NULL;
			status = SUCCESS;
		} else if (NULL != headNode && NULL != input) {
			printf("head is not null \n");
			status = SUCCESS;
		}
	}
	return status;
}

/*
int addition(int firstNum, int secondNum)
{
  return firstNum + secondNum;
}
*/
