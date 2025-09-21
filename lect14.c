#include<stdio.h>
// int main()
// {
    // int arr[5]={1,8,3,7,5};
    // int n=sizeof(arr);
    // for (int i = 0; i < n-1; i++)
    // {  for (int j = 0; j < n-i-1; j++)
    // {
    //    if (arr[j]>arr[j+1])
    //    {
    //        int temp=arr[j];
    //        arr[j]=arr[j+1];
    //        arr[j+1]= temp;
    //    }
    // }
    // printf("%d ",arr[i]);
    // }
    // return 0;
// }

    //                        output: 1 3 5 7 8



// #include <limits.h>
// int maxarraysum(int arr[], int n)
// {
//     int maxsum = INT_MIN;
//     for (int i = 0; i < 5; i++)
//     {
//         int Sum=0;
//         for (int j = i; j < 5; j++)
//         {
//            Sum = Sum+arr[j];
//         } 
//         if (Sum > maxsum)
//         {
//            maxsum=Sum;
//         }  
//     }
//     return maxsum;
// }
// int main()
// {
//     int arr[5] = {-1, -2, -3, -4, -5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int data = maxarraysum(arr, n);
//     printf("%d", data);
// }

 

#include<limits.h>
int BSearch()
{
  int arr[5]={1,2,3,4,5};
  int target=3;
  int s=0;
  int end=5;
  while (s<=end)
  {
    int mid=(s+end)/2;
    if (arr[mid]==target)
    {
        return mid;
    }
    else if (arr[mid]<target)
    {
        s=mid+1;
    }
    else
    {
        end=mid-1;
    } 
  }
  return -1;
}
int main()
{
    int result = BSearch();
    if (result!=-1)
        printf("element found at index: %d\n",result);
    else
        printf("element not found\n");
    return 0;
}

                    //   output: element found at index: 2