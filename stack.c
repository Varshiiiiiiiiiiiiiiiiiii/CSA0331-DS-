#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("\nEnter the size of STACK[MAX=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");
	do
	{
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					peek();
					break;
				}
			case 4:
				{
					display();
					break;
				}
			case 5:
				{
					printf("\n\t EXIT POINT");
					break;
				}
			default:
				{
					printf("Enter 1 to 5");
				}
		}
	}
	while(choice!=5);
	return 0;
	
}
void push()
{
	if(top>=n-1)
	{
		printf("\n\tSTACK is over flow");
	}
	else
	{
		printf("Enter a value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t STACK is under flow");
	}
	else
	{
		printf("\n\t The popped elements is %d",stack[top]);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\n\t STACK is empty");
	}
		else
		{
			printf("The top of the stack=%d",stack[top]);
		}
	
}
void display()
{
	if(top>=0)
	{
		printf("\n The elements in STACK \n");
		for(i=top;i>=0;i--)
		printf("\n%d",stack[i]);
		printf("\n Press Next choice");
	}
	else
	{
		printf("\n The STACK is empty");
	}
}
