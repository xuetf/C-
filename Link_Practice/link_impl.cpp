#include<cstdlib>
#include<cstdio>
#include"link_interface.h"
#include"alloc.h"
#define TRUE 1
#define FALSE 0

int insert(node **linkp, int value) {
	//�����½ڵ�
	node *current;
	while ((current = *linkp) != NULL && current->value < value)
		linkp = &current->link;
	//�����ڴ�
	
	node *newnode = MALLOC(1, node); //��װ,�����ڴ���
	newnode->value = value;
	newnode->link = current;
	*linkp = newnode;
	return TRUE;
}