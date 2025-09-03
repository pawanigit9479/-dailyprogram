#include<stdio.h>
int main()
{
    // int i,n;
    // printf("enter the limit:");
    // scanf("%d",&n);
    // printf("odd numbers:\n",n);
    // for (i=1; i<=n;i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         printf("%d\n",i);
    //     }
        
    // }



    // int i,n;
    // printf("enter the limit:");
    // scanf("%d",&n);
    // printf("even numbers:\n",n);
    // for (i=1; i<=n;i++)
    // {
    //     if (i % 2== 0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }    



    // int i,n;
    // printf("enter the number:");
    // scanf("%d",&n);
    // printf("table of %d:\n",n);
    // for (i=1; i<=10 ;i++)
    // {
    //     printf("%d * %d = %d\n",n,i,n*i);
    // }



    int num=456;
    int sum=0;
    while (num>0)
    {
        int lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;
    }
    printf("sum is:%d\n",sum);     




    return 0;
}