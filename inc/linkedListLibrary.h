/**
* @file linkedListLibrary.h
* @author Sai Phani Teja Sreeram
* @date 21 Mar 2020
* @brief <brief>
*/

#ifndef __LINKED_LIST_LIBRARY_H_
#define __LINKED_LIST_LIBRARY_H_

typedef enum returnValue {
	SUCCESS = 0,
	FAILURE = -1
}retValue;


struct gLinkedList {
	void *data;
	gLinkedList *next;
};

/**
* @brief <brief>
* @param [in] <name> <parameter_description>
* @return <return_description>
* @details <details>
*/

//dataNode *createNode(void *inputData);
retValue addNode(gLinkedList *headNode,void *input);

#endif /*__LINKED_LIST_LIBRARY_H_*/
