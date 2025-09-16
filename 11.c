#include<stdio.h>
int main()
{
    // int arr[7]={1,3,5,7,4,3,2};
    // int k=6;
    // for (int i = 0; i < 6; i++)
    // {
    //    for (int j = 0; j < 6; j++)
    //    {
    //     if (arr[i]+arr[j]==k)
    //     {
    //        printf("%d %d",i,j);
    //        break;
    //     }
        
    //    }
       
    // }
                                    //  output:j= i+1==> 0 21 5
                                    //            j=0==> 0 21 12 05 1
                                    //            j=1==> 0 21 15 1
                                    //            i=1==> 1 15 1



    // int arr[5]={1,2,5,2,1};
    // int check=1;
    // for (int i = 0; i < 5/2; i++)
    // {
    //      if (arr[i]!=arr[5-1-i])
    //      { 
    //         check=0;
    //         break;
    //      }
    // }
    //  if (check==1)
    //      {     
    //         printf("it is a pallindrome",check);
    //      }
    //     else
    //      {
    //         printf("not a pallimdrome",check);
    //      } 

    //                output: it is a pallindrome



//   int arr[5]={10,20,30,40,50};
//   int first=arr[0];
//   for (int i = 0; i < 5; i++)
//   {
//     arr[i]=arr[i+1];
//   }
//   arr[4]=first;
//   for (int i = 0; i < 5; i++)
//   {
//     printf("%d ",arr[i]);
//   }
//   return 0;
  
                        //  output: 20 30 40 50 10 

  int arr[5]={10,12,14,16,18};
  int n = 5;
  int maxSum = arr[n - 1] + arr[n - 2];
    printf("Maximum sum of a pair in the array is: %d\n", maxSum);

                          output: Maximum sum of a pair in the array is: 34
  return 0;
}  

    













