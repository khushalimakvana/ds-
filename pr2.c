#include<stdio.h>
#include<stdlib.h>
int linersearch (int a[],int x)
{
for(int i=0;i<10;i++)
{
    if(a[i]==x)
    return i+1;
}
return-1;
}
int main()
{
    int a[5],x,b;
    for(int i=0;i<10;i++)
    a[i]=rand()%50+1;
    for(int i=0;i<10;i++)
    printf("%d ",a[i]);
    printf("\n enter the serch element:");
    scanf("%d ",&x);
    b=linersearch(a,x);
    if(b>0)
    printf("search element is found a+%d position:",b);
    else
    printf("element is not foun...");
}
    


