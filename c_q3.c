#include<stdio.h>
int main()
{
    int a[10] = {1,5,4,8,9,2,0,6,11,7};
    int n;
    printf("\nEnter element to search - ");
    scanf("%d", &n);
    
    int flag = 0;
    
    for(int i=0; i<=9; i++)
    {
        if(a[i] == n)
        {
            printf("\nYES");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nNO");
    }
    
    for(int j=0; j<10; j++)
    {
        printf("\t%d", a[j]);
    }
}