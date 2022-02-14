#include<stdio.h>
void reverseBit(int[],int);
void main ()
{
  int i = 0, j, num, a[10],count=0;
  printf("Enter number\n");
  scanf ("%d", &num);
  while (num != 0)
    {
      a[i] = num % 2;
      num = num / 2;
      i++;
    }
  printf ("Output: Before:");
  for (j = i - 1; j >= 0; j--)
    {
      printf ("%d", a[j]);
      count++;
    }
	reverseBit(a,count);
 

  
}

void reverseBit(int arr[],int count)
	{
		int i;
		printf(" After:");
		for(i=0;i<count;i++)
			{
				printf("%d",arr[i]);
			}
		printf("\n");
	}

