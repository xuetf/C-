typedef struct NODE {
	NODE *link;
	int value;
}node;

/**
* 插入函数
* 成功返回1,内存不够返回0.
*/
int insert(node ** linkp, int value);


