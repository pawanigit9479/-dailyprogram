#include<stdio.h>
int main()
{
    // for(int i=0;i<3;i++)
    // {
    //     for (int j = 0; j<3 ; j++)
    //     {
    //         printf("* ");
    //     }
    //  printf(" \n");   
    // }

                               // output
                               //  * * *  
                               //  * * *  
                               //  * * * 


                               

    // for(int i=0;i<=4;i++)
    // {
    //     for (int j = 0; j<=i ; j++)
    //     {
    //         printf("* ");
    //     }
    //  printf(" \n");   
    // } 
    
    //                            output
    //                            *          
    //                            * *        
    //                            * * *      
    //                            * * * *    
    //                            * * * * * 



    
    // for(int i=0 ; i<5; i++)
    // {
    //     for (int j=4; j>i; j--)
    //     {
    //         printf(" * ");
    //     }
    //  printf(" \n");   
    // } 

    //               output 
    //             *  *  *  *  
    //             *  *  *
    //             *  *
    //             *




    // for(int i=0;i<=5;i++)
    // {
    //     for (int j=4 ; j>=i ; j--)
    //     {
    //         printf("   ");
    //     }
    //     for (int j =0; j<=i; j++)
    //     {
    //          printf(" * ");
    //     }
    //       printf("\n");
    // } 

            //           output 
            //                   * 
            //                *  *
            //             *  *  *
            //          *  *  *  *
            //       *  *  *  *  *
            //    *  *  *  *  *  *



    // for (int i = 0; i < 5; i++) 
    // {
    //     for (int j = 0; j < i; j++) 
    //     {
    //         printf("  "); 
    //     }
    //     for (int k = 0; k < 5 - i; k++) 
    //     {
    //         printf("* ");
    //     }
    //     printf("\n"); 
    // }

    //                output 
    //                * * * * * 
    //                  * * * *
    //                    * * *
    //                      * *
    //                        *



     for(int i=0;i<=5;i++)
    {
        for (int j=4 ; j>=i ; j--)
        {
            printf("   ");
        }
        for (int j =0; j<=i; j++)
        {
             printf(" * ");
        }
         for (int j = 1; j<=i ; j++)
         {
              printf(" * ");
         }
          printf("\n");
    } 
  
    //                     output
    //                       * 
    //                    *  *  *
    //                 *  *  *  *  *
    //              *  *  *  *  *  *  *
    //           *  *  *  *  *  *  *  *  *
    //        *  *  *  *  *  *  *  *  *  *  *





  return 0;
}