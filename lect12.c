#include<stdio.h>
#include<limits.h>
// int maxArraySum(int arr[],int n,int k)
// {
//     int maxSum = 0;
//     for (int i = 0; i <=n-k; i++)
//     {
//         int currSum=0;
//         for (int j = i; j < i+k; j++)
//         {
//            currSum = currSum+arr[j];
//         }
//         if (currSum > maxSum)
//         {
//            maxSum=currSum;
//         }  
//     }
//      return maxSum;
//  }
//     int main()
//     {
//     int arr[5]={1,3,5,7,9};
//     int k=3;
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int data=maxArraySum(arr,n,k);
//     printf("%d",data);
//     }

                                //   output: int min/maxsum=0 => 21



int maxArraySum(int arr[],int n,int k)
{
    int wSum = 0;
    for (int i = 0; i <k; i++)
    {
        wSum=wSum+arr[i];
    }
    int maxsum=wSum;
    for (int j =k; j <n; j++)
     {
        wSum=wSum+arr[j]-arr[j-k];
        if (wSum > maxsum)
        {
          maxsum=wSum;
        }  
    }
    return maxsum;
 }
    int main()
    {
    int arr[8]={1,5,9,3,7,2,8,4};
    int k=3;
    int n= sizeof(arr)/sizeof(arr[0]);
    int data=maxArraySum(arr,n,k);
    printf("%d",data);
    }                         
    
                               // output: 19



