#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,v,flag=0,count=0,j;
scanf("%d %d",&n,&v);
int *l=(int*)malloc(n*sizeof(int));
int *k=(int*)malloc(n*sizeof(int));
int **p=(int**)malloc(n*sizeof(int*));
for(i=0;i<n;i++)
{
scanf("%d",(k+i));
*(p+i)=(int*)malloc(*(k+i)*sizeof(int));
for(j=0;j<*(k+i);j++)
{
    scanf("%d",(*(p+i)+j));
    if((v>p[i][j])&&(flag==0))
    {
        *(l+count)=i+1;
        count++;
        flag=1;
    }
}
flag=0;
}
printf("%d\n",count);
for(i=0;i<count;i++)
printf("%d ",*(l+i));

return 0;
}
