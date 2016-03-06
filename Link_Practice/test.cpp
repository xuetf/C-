#include "link_interface.h"
#include<cstdlib>
#include<cstdio>
int main() {
	node* head = NULL;//±ØÐë³õÊ¼»¯
	insert(&head, 3);
	printf("%d\n",head->value);

	insert(&head, 1);
	printf("%d\n", head->value);
	getchar();
}