#include<cstdlib>
#include<cstdio>
#include"link_interface.h"
#include"alloc.h"
#define TRUE 1
#define FALSE 0

int insert(node **linkp, int value) {
	//创建新节点
	node *current;
	while ((current = *linkp) != NULL && current->value < value)
		linkp = &current->link;
	//分配内存
	
	node *newnode = MALLOC(1, node); //封装,包含内存检测
	newnode->value = value;
	newnode->link = current;
	*linkp = newnode;
	return TRUE;
}