#include<stdio.h>
int sum(int *x,int *y)
{
    *x=50;
    *y=50;
    int c=(*x)+(*y);
    return c;
}

int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d" ,*x,*y);

}
int main()
{
     int n = 7;
    int isPrime = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (n <= 1)
        printf("Not prime\n");
    else if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");
    int a = 5, b = 10;
    int result = sum(&a, &b);
    printf("Sum is: %d\n", result);
    int x = 3, y = 4;
    swap(&x, &y);
    return 0;
 
                            // output: Prime
                            //         Sum is: 100
                            //         4 3
}    