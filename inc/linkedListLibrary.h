#ifndef __LINKED_LIST_LIBRARY_H_
#define __LINKED_LIST_LIBRARY_H_

typedef enum returnValue {
	SUCCESS = 0,
	FAILURE = -1
}retValue;

struct dataNode {
	void *data;
	dataNode *next;
};

//dataNode *createNode(void *inputData);
retValue addNode(void *headNode,void *dataNode);

#endif /*__LINKED_LIST_LIBRARY_H_*/
