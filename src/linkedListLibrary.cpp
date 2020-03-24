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

retValue addNode(gLinkedList *headNode,void *input)
{
	retValue status = FAILURE;
	if (NULL != input) {
		if (headNode == NULL) {
			headNode->data = input;
			//**headNode->next = NULL;
		} else if (NULL != headNode && NULL != input) {
			printf("head is null");
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
