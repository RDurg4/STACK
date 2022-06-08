#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];
int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int val)
{
	if(isfull())
	{
		printf("Overflow");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("\n%d Pushed",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("Underflow");
	}
	else
	{
		printf("\n%d Popped",stack[top]);
		stack[top]=-1;
		top--;
	}
}
void findtop()
{
	printf("\nTop position = %d",top);
	printf("\nTop value= %d",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n%d",stack[i]);
	}
}
void main()
{
	while(1)
	{		
		printf("\n1.PUSH\n2.POP\n3.FIND THE TOP VALUE\n4.DISPLAY\n5.EXIT");
		int ch;
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				int v;
				printf("Enter value to be pushed");
				scanf("%d",&v);
				push(v);
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				findtop();
				break;
			}
			case 4:
			{
				display();
				break;
			}
			case 5:
			{
				printf("\nEXITING");
				exit(0);
			}
		}
	}
}	
