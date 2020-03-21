#include "linkedListLibrary.h"
#include <stdlib.h>
#include <stdio.h>

using namespace std;

/*dataNode *createNode(void *inputData)
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
}*/

retValue addNode(void *headNode,void *dataNode)
{
	retValue status = FAILURE;
	if(NULL != headNode && NULL != dataNode)
	{
		status = SUCCESS;
	}
	return status;
}

/*
int addition(int firstNum, int secondNum)
{
  return firstNum + secondNum;
}
*/
