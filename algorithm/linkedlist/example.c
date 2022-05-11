#include <stdio.h>
#include <stdlib.h>
typedef struct _NODE{
	int data;
	struct NODE * next;
}NODE; //링크드리스트의 각 노드 구조체

int insert(NODE *HEAD,int idx, int data){
	if(HEAD->next == NULL)return 0;
}


NODE * get(NODE *HEAD,int idx){
	NODE *cur = HEAD;
	for(int i = 0;i<idx;i++){
		cur = cur->next;
	}
	return cur;
}

int main(){
	NODE *root = (NODE *)malloc(sizeof(NODE));
	root->data = 3;
	NODE *next = (NODE *)malloc(sizeof(NODE));
	next->data = 6;
		
	root->next = next;


	NODE *next1 = (NODE *)malloc(sizeof(NODE));

	next->next = next1;
	next1->data = 123;
	
	NODE * temp = get(root,2);
	printf("%d\n",temp->data);

	free(root);
	free(next);
}
