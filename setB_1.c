#include <stdio.h>

int top=0;
char stack[100];
void push(char);

void main()
{
    int l;
    printf("Enter length: ");
    scanf("%d",&l);
    int i;
    char str[l];
    printf("Enter string: ");
    scanf("%s",str);
    
    for(i=0;i<l;i++)
    {
        push(str[i]);
    }
    
    if(top==0)
		{
        	   printf("Empty String");
    		}
    else
    {
        for(i=0;i<=top;i++)
        {
            printf("%c",stack[i]);
        }
		printf("\n");
		
    }
}
void push(char a)
{
    if(a != stack[top])
    {
        top++;
        stack[top] = a;
    }
    else
    {
        top--;
    }
}

