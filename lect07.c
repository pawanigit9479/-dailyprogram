#include<stdio.h>
int main()
{
    //  for (int i = 0; i <6; i++) 
    // {
    //     for (int j = 0; j < i; j++) 
    //     {
    //         printf("  "); 
    //     }
    //     for (int k = 0; k < 6 - i; k++) 
    //     {
    //         printf(" %d", k);
    //     }
    //     printf("\n"); 
    // }

                //  output 
                //  0 1 2 3 4 5
                //    0 1 2 3 4
                //      0 1 2 3
                //        0 1 2
                //          0 1
                //            0


    // int n=0;
    // for(int i=0;i<5;i++)
    // {
    //     for (int j=4; j>i ; j--)
    //     {
    //         printf("   ");
    //     }
    //     for (int j =0; j<i; j++)
    //     {
    //          printf(" %d ",n++);
    //     }
    //       printf("\n");
    // } 

    //                output 
    //                     0
    //                  1  2
    //               3  4  5
    //            6  7  8  9


    // int n=97;
    // for(int i=0;i<=4;i++)
    // {
    //     for (int j = 0; j<=i ; j++)
    //     {
    //         printf("%c ",n++);
    //     }
    //  printf(" \n");   
    // } 
  
    //                output 
    //                a  
    //                b c
    //                d e f
    //                g h i j
    //                k l m n o


    // int n=97;
    // for (int i = 0; i < 6; i++) 
    // {
    //     for (int j = 0; j < i; j++) 
    //     {
    //         printf("  "); 
    //     }
    //     for (int k = 0; k < 6- i; k++) 
    //     {
    //         printf("%c ",n++);
    //     }
    //     printf("\n"); 
    // }
    //               output 
    //               a b c d e f 
    //                 g h i j k
    // l                 l m n o
    //                     p q r
    //                       s t
    //                         u

    // int n=97;
    //  for(int i=0;i<=3;i++)
    // {
    //     for (int j=2 ; j>=i ; j--)
    //     {
    //         printf("   ");
    //     }
    //     for (int j =0; j<=i; j++)
    //     {
    //          printf(" %c ",n++);
    //     }
    //      for (int j = 1; j<=i ; j++)
    //      {
    //           printf(" %c ",n++);
    //      }
    //       printf("\n");
    // } 
  
    //                     output 
    //                      a 
    //                   b  c  d
    //                e  f  g  h  i
    //             j  k  l  m  n  o  p



    // for (int i = 0; i <7; i++)
    // {
    //     for (int j = 0; j<=i; j++)
    //     {
    //         printf("  ");
    //     }
    //     for( int k = 6; k>i; k--)
    //     {
    //         printf(" *");
    //     }
    //     for (int p = 6; p>=i; p--)
    //     {
    //        printf(" *");
    //     }  
    //     printf("\n");
    // }
     
    //                        output 
    //                        * * * * * * * * * * * * *
    //                          * * * * * * * * * * *
    //                            * * * * * * * * *
    //                              * * * * * * *
    //                                * * * * *
    //                                  * * *
    //                                    *

  

    // for (int i = 0; i < 5; i++)
    //  {
    //     for (int k = 0; k < i;k++)
    //     {
    //         printf(" ");
    //     }
    //     for ( int j = 0; j < 5; j++)
    //     {
    //         printf(" * ");
    //     }
    //      printf("\n");
    // }
 
    //                 output 
    //                  *  *  *  *  *   
    //                    *  *  *  *  *  
    //                      *  *  *  *  * 
    //                        *  *  *  *  *
    //                           *  *  *  *  *



    for (int i = 1; i <= 5; i++)
     {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * (5 - i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 5; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * (5- i); j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
                //   output 
                //   *        *
                //   **      **
                //   ***    ***
                //   **********
                //   **********
                //   ****  ****
                //   ***    ***
                //   **      **
                //   *        *

                  
 return 0;
}