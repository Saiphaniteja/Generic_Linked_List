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

retValue addNode(gLinkedList **headNode, void *input) {
	retValue status = FAILURE;
	if (NULL != input) {
		printf("%d %s \n",__LINE__,__func__);
		if ((*headNode) == NULL) {
			printf("%d %s \n",__LINE__,__func__);
			headNode = (gLinkedList **) malloc(sizeof(gLinkedList));
			printf("%d %s \n",__LINE__,__func__);
			(*headNode)->data = input;
			printf("%d %s \n",__LINE__,__func__);
/*
			(*headNode)->next = NULL;
*/
			printf("%d %s \n",__LINE__,__func__);

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
