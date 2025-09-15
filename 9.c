#include<stdio.h>
//  int sum()
//  {
//     int a=20;
//     int b=30;
//     int c=25;
//     int d=a+b+c;
//     printf("%d",d);
//  }
//  int main()
//  {
//    sum();
//  }
  
                    // output: 75
 

// int xpattern()                    
// {
//     for(int i=0;i<5;i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//           if (j == i || j == 4- i)
//           printf("*");
//           else
//           printf(" ");
//         }
//         printf("\n");
//     } 
//  }
//  int main(){
//     xpattern();
//  }
 
                            //   output 
                            //   *   *
                            //    * *
                            //     *
                            //    * *
                            //   *   *


// int odd()
// {    
//     int a=73;
//       if (a%2==0)
//       {
//        printf("it is even");
//       }
//       else
//       {
//         printf("it is odd");
//       }
//     }                              
// int main(){
//     odd ();
// }

                            //  output: it is odd
 
// int prime()
// { 
//     int a=43;
//    if (a<=1 )
//    {
//    printf("not prime");
//    return 0;
//    }
//    for (int i = 2; i < a; i++)
//    {
//     if (a%2==0)
//     {
//         a=0;
//         break;
//     }
//    }
//       if (a)
//     printf("prime");
//    else 
//    printf("not prime");
// }                      
// int main()
// {
//    prime();
// }  
 
                    // output: prime


int Digits(int num) 
{
    int sum = 0;
    while (num > 0)
    {
        sum = num % 10;
        num /= 10;
    }
    return sum;
}
int MagicNumber(int num)
 {
    int sum = num;
    while (sum > 9) 
    {
        sum =Digits(sum);
    }
    return (sum == 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (MagicNumber(n))
    {
        printf("%d is a Magic Number.\n",n);
    } else
    {
        printf("%d is NOT a Magic Number.\n",n);
    }
 return 0;
}
 