#include "linkedListLibrary.h"
#include <stdio.h>
#include <stdlib.h>

struct listData {
	int integer1;
	int integer2;
};

struct linkedList {
	listData data;
	linkedList *next;
};

int main()
{
	linkedList *list = (linkedList *) malloc(sizeof(linkedList));
	listData *tempNode = (listData *) malloc(sizeof(listData));

	tempNode->integer1 = 155;
	tempNode->integer2  = 3;
	//nodeData = (linkedList *)createNode(tempNode);
	free(tempNode);

	//addNode(list,node);
  return 0;
}
