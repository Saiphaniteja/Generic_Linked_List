#include "linkedListLibrary.h"
#include <stdio.h>
#include <stdlib.h>

struct testListData {
	int integer1;
	int integer2;
};

int main()
{
	retValue ret = FAILURE;
	gLinkedList *list = NULL;
	testListData *testData = (testListData *)malloc(sizeof(testListData));
	testData->integer1 = 10;
	testData->integer2 = 20;

	ret = addNode(list,testData);
	printf("%d is return \n",ret);

	//list.data  = &testData;

	/* list
	linkedList *list = (linkedList *) malloc(sizeof(linkedList));
	linkedList *tempNode = (linkedList *) malloc(sizeof(linkedList));
	linkedList *nodeData = (linkedList *) malloc(sizeof(linkedList));

	tempNode->integer1 = 155;
	tempNode->integer2  = 3;
	nodeData = (linkedList *)createNode(tempNode);
	free(tempNode);

	addNode(list,nodeData); */

  return 0;
}
