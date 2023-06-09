//exp08.3_WorstFit.c
#include <stdio.h>
int main()
{
    int bno,pno,bsize[10],psize[10],i,j,allocation[10];
    for(i=0;i<10;i++)
    {
        allocation[i]=-1;
    }
    printf("Enter The No. Of Blocks : ");
    scanf("%d", &bno);
    printf("Enter The Size Of Block : \n");
    for(i=0;i<bno;i++)
    {
        scanf("%d", &bsize[i]);
    }
    void insertionSort(int bsize[],int bno)
{
int i, key, j;
for (i = 1; i < bno; i++)
{
key = bsize[i];
j = i - 1;
while (j >= 0 && bsize[j] < key)
{
bsize[j + 1] = bsize[j];
j = j - 1;
}
bsize[j + 1] = key;
}
}
insertionSort(bsize,bno);
printf("The Arranged Block Size in their decreasing order : \n");
for(i=0;i<bno;i++)
{
    printf("b%d : %d\n",i+1,bsize[i]);
}
    printf("Enter The No. Of Process : ");
    scanf("%d", &pno);
    printf("Enter The Size Of Process : \n");
    for(i=0;i<pno;i++)
    {
        scanf("%d" ,&psize[i]);
    }
    for(i=0;i<pno;i++)
    {
        for(j=0;j<bno;j++)
        {
            if(bsize[j]>=psize[i])
            {
                allocation[i]=j;
                bsize[j]=bsize[j]-psize[i];
                break;
            }
        }
    }
    printf("\nProcess No.\tProcess Size\tBlock Size\n");
    for(i=0;i<pno;i++)
    {
        printf("%d\t\t\t %d\t\t", i+1,psize[i]);
        if(allocation[i]!=-1)
        printf("\t\t\t%d\n",allocation[i]+1);
        else
        printf("Not Allocated\n");
    }
    return 0;
}
