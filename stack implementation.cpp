#include<stdio.h>
class stack
{
	int size;
	int a[10];
	int top;
	public:
		stack()
		{
			size=3;
			top=-1;
			a[size];
		}
		void push(int x)
		{
			if (top<size)
			{
				top++;
				a[top]=x;
			}
			else if(top==size)
			{
				printf("\n stack overflow:\n");
			}
		}
		void pop()
		{
			int x;
			if (top==-1)
			{
				printf("\n stack underflow:\n");
			}
			else
			{
				a[top]=x;
				top--;
			}
		}
		void display()
		{
			printf("stack elements are:\n");
			for (int i=top;i>=0;i--)
			{
				printf("%d ",a[i]);
			}
		}
};
int main()
{
	stack s;
	s.push(8);
	s.push(9);
	s.push(10);
	s.push(1);
	s.pop();
	s.display();
}