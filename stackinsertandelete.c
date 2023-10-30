#include<stdio.h>
#define MAX 5
struct stack
{
	int data[MAX];
	int top;
}s;

void init()
{
	s.top=-1;
}

int isempty()
{
	if(s.top==-1)
	return 1;
	else
	return 0;
}

int isfull()
{
	if(s.top==MAX-1)
	return 1;
	else
	return 0;
}

void insertstack(int num)
{
	if(isfull())
	{
		printf("stack is full");
	}
   	else
   	{
        s.top++; 
   		s.data[s.top]=num;
   		printf("\nsuccesfully insert");
	}
}

void deletevalue()
{
	int val;
	if(isempty())
	{
		printf("stack is empty");
	}
    else
    {
    	val=s.data[s.top];
    	s.top--;
    	printf("poped value=%d",val);
	}
}

void display()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		printf("\n%d",s.data[i]);
	}
}

int main()
{
	int ch,num;
	init();
	do{
		printf("\n 1:insert value \n 2:delete value \n 3:display");
		printf("\nenter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		   case 1:printf("enter number:");
		   			scanf("%d",&num);
					insertstack(num);
					break;
		 case 2: deletevalue();
		 			break;
		 case 3:display();
		 		break;
		}
	}while(ch<4);
}





