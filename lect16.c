#include <stdio.h>
int main()
{
    // int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
    // for (int i = 0; i < 3; i++)
    // {
    //    for (int j = 0; j < 3; j++)
    //    {
    //      printf("%d ",arr[i][j]);
    //    }
    // printf("\n");  
    // }


                //   output: 1 2 3 
                //           4 5 6
                //           7 8 9



    // int sum=0;            
    // int arr[3][3]={ {1,2,3},{4,5,6},{7,8,9} };
    // for (int i = 0; i < 3; i++)
    // {
    //    for (int j = 0; j < 3; j++)
    //    {
    //      sum=sum+arr[i][j];
    //    }
    // }
    // printf("Sum of elements is: %d",sum);
  
                        //   output: Sum of elements is: 45



    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     int sum=0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum=sum+arr[i][j];
    //     }
    // printf("sum of row:%d \n",sum);
    // } 

                     //   output: sum of row:6 
                             //   sum of row:15
                             //   sum of row:24



//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for (int i = 0; i < 3; i++)
//     {
//         int column=0;
//        for (int j = 0; j < 3; j++)
//        {
//          column=column+arr[j][i];
//        }
//     printf("sum of column:%d\n",column);   
//     }
    
//                     output: sum of column:12
//                             sum of column:15
//                             sum of column:18



    //  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //  int arr1[9];
    //  int k=0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         arr1[k]=arr[i][j];
    //         k++;
    //     }
    // }
    // for (int i = 0; i < 9; i++)
    // {
    //      printf("%d ",arr1[i]);
    // }
    // printf("\n");
    // return 0;
    
    //                output: 1 2 3 4 5 6 7 8 9 


    
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}},transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
         transpose[j][i]=arr[i][j];
       }   
    }
    printf("ORIGINAL MATRIX:\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        printf("%d ",arr[i][j]); 
       }
       printf("\n");
    }
    printf("\nTRANSPOSE MATRIX:\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        printf("%d ",transpose[i][j]);
       }
       printf("\n");
    }
    return 0;

    //                     output: 
    //                     ORIGINAL MATRIX:
    //                     1 2 3 
    //                     4 5 6  
    //                     7 8 9 

    //                     TRANSPOSE MATRIX:
    //                     1 4 7 
    //                     2 5 8 
    //                     3 6 9 
  
  
  
      // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
      // int i,j;
      // int diag1=0,diag2=0;
      // for (int i = 0; i < 3; i++)
      // {
      //   diag1+=arr[i][i];
      // }
      // for (int i = 0; i < 3; i++)
      // {
      //   diag2+=arr[i][3-1-i];
      // }
      // printf("sum of diagonal 1: %d\n",diag1);
      // printf("sum of diagonal 2: %d\n",diag2);
      // return 0;
      
                            // output: sum of diagonal 1: 15
                            //         sum of diagonal 2: 15
                
  }