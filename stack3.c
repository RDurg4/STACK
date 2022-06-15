#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
int main()
{
	int ch,e,t,c=0;
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.TOP VALUE\n4.DISPLAY\n5.EXIT\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				printf("Enter the element: ");
				scanf("%d",&e);
				struct node *input;
				input=(struct node*)malloc(sizeof(struct node));
				input->data=e;
				if(top==NULL)
				{
					input->next=NULL;
				}
				else
				{
					input->next=top;
				}
				top=input;
				printf("%d inserted\n",input->data);
				break;
			}
			case 2:
			{
				if(top==NULL)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					struct node *temp=top;
					int t=top->data;
					top=top->next;
					free(temp);
					printf("Popped element= %d\n",t);
				}
				break;
			}
			case 3:
			{
				c=0;
				struct node *temp=top;
				while(temp->next!=NULL)
				{
					temp=temp->next;
					c++;
				}
				if(top==NULL)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					struct node *temp=top;
					printf("Top position= %d\n",c);
					printf("Top value= %d\n",temp->data);
				}
				break;
			}
			case 4:
			{
				if(top==NULL)
				{
					printf("Stack Underflow\n");
				}
				else
				{
					struct node *temp=top;
					while(temp->next!=NULL)
					{
					printf("\n | %d |",temp->data);
					temp=temp->next;
					}
					printf("\n | %d |\n",temp->data);
					printf(" ______");
				}
				break;
			}
			case 5:
			{
				printf("EXITING\n");
				exit(0);
			}
		}
	}
}

