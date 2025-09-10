#include<stdio.h>
int main ()
{
    // for(int i=0;i<4;i++)
    // {
    //     for (int j = 0; j<i ; j++)
    //     {
    //         printf(" * ");
    //     }
    //     for (int k = 4; k>i; k--)
    //     {
    //       printf(" ");
    //     }
    //     for (int l = 3; l>i; l--)
    //     {
    //       printf("  ");
    //     }
    //     for (int j=3; j>i ; j--)
    //     {
    //         printf("   ");
    //     }
    //     for (int j =0; j<i; j++)
    //     {
    //          printf(" * ");
    //     }
    //       printf("\n");
    // } 

    //                output 
    //                 *               *
    //                 *  *         *  *
    //                 *  *  *   *  *  *
  


    // for(int i=0;i<4;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         printf("*");
    //     }
    //     for(int k=3;k>i;k--)
    //     {
    //         printf(" ");
    //     }
    //      for(int p=3;p>i;p--)
    //     {
    //         printf(" ");
    //     }
    //     for(int z=0;z<=i;z++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<4;i++)
    // {
    //     for(int j=3;j>i;j--)
    //     {
    //         printf("*");
    //     }
    //     for(int k=0;k<=i;k++)
    //     {
    //         printf(" ");
    //     }
    //      for(int k=0;k<=i;k++)
    //     {
    //         printf(" ");
    //     }
    //      for(int j=3;j>i;j--)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
        
                    //    output 
                    //    *      *
                    //    **    **
                    //    ***  ***
                    //    ********
                    //    ***  ***
                    //    **    **
                    //    *      *  

  
    // for (int i = 1; i <=5; i++)
    // {
    //   for ( int j = 1; j <=5; j++)
    //   {
    //    if (i==1 || i==5 ||j==1 || j==5)
    //    {
    //      printf(" * ");
    //    }
    //    else 
    //    {
    //    printf("   ");
    //    }
    //   }
    //   printf("\n"); 
    // }
                      
                    //  output 
                    //   *  *  *  *  * 
                    //   *           *
                    //   *           *
                    //   *           *
                    //   *  *  *  *  *


                   
// for (int i = 1; i <=5; i++)
//     {
//       for ( int j =1; j <=5; j++)
//       {
//        if (i==0 || i==5 ||j==1|| j==5)
//        {
//          printf(" * ");
//        }
//        else 
//        {
//        printf("   ");
//        }
//       }
//       printf("\n"); 
//     }
      
                                // output 
                                // *           * 
                                // *           *
                                // *           *
                                // *           *
                                // *  *  *  *  *
                


    for (int i = 0; i < 7; i++)
     {
        for (int j = 0; j < 7; j++)  
        {
          if (j == i || j == 7 - 1 - i)
          printf("*");
          else
          printf(" ");
        }
        printf("\n");
    } 

                            // output 
                            // *     *
                            //  *   * 
                            //   * *
                            //    *
                            //   * *
                            //  *   * 
                            // *     *

return 0;
}   

