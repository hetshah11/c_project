#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct family
{
char child[8];
char father[8];
}a[5];
void countChildren(char[]);
int count = 0;
void main()
{
int m;
FILE *fp;
fp = fopen("file.txt", "r");
char name[20];

for(m=0;m<5;m++)
{
int i=0;
int line=1;
while(line--)
{
    fscanf(fp,"%s",&a[m].child[i]);
    i++;
}

i=0, line=1;
while(line--)
{
    fscanf(fp,"%s",&a[m].father[i]);
    i++;
}  
}




printf("Name: ");
scanf("%s",name);
for(int i=0;i<5;i++)
{
   if(strcmp(a[i].father,name)==0)
        countChildren(a[i].child);
}
printf("Grandchildren: %d\n",count);
fclose(fp);
}

void countChildren(char name[])
{
   for(int j=0;j<5;j++)
   {
       if(strcmp(name,a[j].father)==0)
   {
count++;
   }
            }

    }

