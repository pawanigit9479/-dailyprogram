#include<stdio.h>
int main()
{
    // int n,a=0,b=1,next;
    // printf("enter number:");
    // scanf("%d",&n);
    // for (int i = 1; i <=n; i++)
    // {
    //     printf("%d ",a);
    //     next=a+b;
    //     a=b;
    //     b=next;
    // }

 
    // int n,a,b,next;
    // printf("enter number:");
    // scanf("%d",n);
    // for (int i =1; i <=n; i++)
    // {   if(i==n)
    //     next=a+b;
    //     a=b;
    //     b=next;
    //     printf("%d",i);
    //     break;
    // }


    // int n;
    // printf("enter number:");
    // scanf("%d",n);
    // for (int i = 1; i <=10; i++)
    // {
    //    if (i%2==0)
    //    {
    //     continue;
    //    }
    //    printf("%d ",i);
    // }
    

    // int n,count=0;
    // printf("enter number:");
    // scanf("%d",&n);
    // if (n==0)
    // {
    //    count=1;
    // }
    // while(n>0)
    // {
    //     count++;
    //     n=n/10;
    // }
    // printf("digit count= %d\n",count);


    int i, j, a;
    printf("Prime numbers between 1 and 100 are:\n");
    for(i = 2; i <= 100; i++)
     {
       a = 1; 
        for(j = 2; j <= i/2; j++) 
        {
            if(i % j == 0) 
            {
                a = 0; 
                break;
            }
        }

        if(a == 1) 
        {
            printf("%d ", i);
        }
    }

return 0; 
}