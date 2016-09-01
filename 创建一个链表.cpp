#include<stdio.h>
#include "stdlib.h"

struct list
{
	int data;
	struct list *next;
 };
 typedef struct list node;
 typedef node *link;
 int main()
 {
 	link ptr,head;
 	int num,i;
 	ptr=(link)malloc(sizeof(node));
 	head=(link)malloc(sizeof(node));
 	ptr=head;
 	printf("请输入5个数==>\n");
 	for(i=0;i<=4;i++)
 	{
 		scanf("%d",&num);
 		while(getchar()!='\n')
 		 continue;
		 ptr->data=num;
 		ptr->next=(link)malloc(sizeof(node));
 		if(i==4) ptr->next=NULL;
 		else ptr=ptr->next;
	 }
	ptr=head;
	 while(ptr!=NULL)
	 {
	 	printf("这些数是==>%d\n",ptr->data);
		 ptr=ptr->next; 
	 }
	 free(ptr);
	 free(head);
	 free(ptr->next);
	 return 0;
  } 
