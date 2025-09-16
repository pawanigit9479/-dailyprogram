#include<stdio.h>
int main()
{
    // int a=10;
    // printf("%d",a);
    

   
    // int a = 75;
    // int m = 70;
    // if (a >= 75 && m >= 70)
    // {
    //     printf("A");
    // }
    // else if (a >= 75 && m < 70 && m >= 60)
    // {
    //     printf("B");
    // }
    // else if (a >= 75 && m < 60 && m >= 50)
    // {
    //     printf("C");
    // }
    // else
    // {
    //     printf("D");
    // }    


    // int a;
    // printf("enter an integer:");
    // scanf("%d",&a);
    //   if(a%2==0)
    //  { 
    //     printf("even");
    //  }
    // else
    //  {
    //     printf("odd");
    //  }


    // int a,b;
    // printf("enter to numbers:");
    // scanf("%d%d",a,b);
    // if (a>b)
    // {
    //     printf("a is greater");
    // }
    // else{printf("b is smaller");
    // }
    
    
    // int a,b,c;
    // printf("enter two numbers:");
    // scanf("%d%d",&a,&b);
    // printf("enter the input:\n 1.add\n2.sub\n3.multi\n4.div\n");
    // scanf("%d",&c);
    // if (c==1)
    // {
    //     printf("sum is:%d",a+b);
    // }
    // else if(c==2)
    // {
    //     printf("subtraction is:%d",a-b);
    // }
    // else if(c==3)
    // {
    //     printf("multi is:%d",a*b);
    // }
    // else
    // {
    //     printf("div is:%d",a/b);
    // }

 
    // int n;
    // printf("enter numbers:");
    // scanf("%d",&n);
    // if (n%3==0 && n%5==0)
    // {
    //     printf("FIZZBUZZ\n");
    // }
    // else if (n%3==0)
    // {
    //     printf("FIZZ\n");
    // }
    // else if (n%5==0)
    // {
    //     printf("BUZZ\n");
    // }
    // else
    // {
    //     printf("%d\n",n);
    // }
    
 

    // int n,o,a=0,b;
    // printf("enter a number:");
    // scanf("%d",&n);
    // o=n;
    // while (n!=0)
    // {
    //  b=n%10;
    //  a=a*10+b;
    //  n=n/10;
    // }
    // if(o==a)
    // {
    //     printf("it is pallindrome\n",o);
    // }
    // else
    // {
    //    printf("it is not a pallindrome\n",o);
    // }



    int y;
    printf("enter days:");
    scanf("%d",&y);
    if ((y%400==0) || (y%4==0 && y%100!=0) )
    {
        printf("LEAP YEAR");
    }
    else
    {
         printf("not leap year");
    }
    
return 0;
}