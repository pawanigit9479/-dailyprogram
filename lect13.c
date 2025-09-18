#include <stdio.h>
// #include <limits.h>
// int maxarraysum(int arr[], int n)
// {
//     int maxsum = 0;
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
//     int arr[5] = {1, -2, -3, -4, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int data = maxarraysum(arr, n);
//     printf("%d", data);
// }
 
//                            outoup: 7



// int main()
// {
// int a[5],b[5],c[10];
// int i,j;
// printf("enter 5 digits for array a:\n");
// for ( i = 0; i < 5; i++)
// {
//     scanf("%d",&a[i]);
// }
// printf("enter 5 digits for array b:\n");
// for ( i = 0; i < 5; i++)
// {
//     scanf("%d",&b[i]);
// }
// for ( i=0; i<5 ;i++)
// {
//     c[i]=a[i];
// }
// for ( j = 0; j < 5; j++)
// {
//     c[i+j]=b[j];
// }
// printf("\nmerged array:\n");
// for ( i = 0; i < 10; i++)
// {
//     printf("\nc[%d]=%d",i,c[i]);
// }
// return 0;
// }

//                                output: enter 5 digits for array a:
//                                        1
//                                        2
//                                        3
//                                        4
//                                        5
//                                        enter 5 digits for array b:
//                                        10
//                                        9
//                                        8
//                                        7
//                                        6

//                                        merged array:

//                                        c[0]=1
//                                        c[1]=2
//                                        c[2]=3
//                                        c[3]=4
//                                        c[4]=5
//                                        c[5]=10
//                                        c[6]=9
//                                        c[7 ]=8
//                                        c[8]=7
//                                        c[9]=6



int main() 
{
    int arr[] = {10, -3, 5, -7, 0, 12, -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Negative numbers in the array are:\n");

    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

                    //   output: -3 -7 -1 