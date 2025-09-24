#include<stdio.h>
int main()
{
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // int reverse[3][3];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 2; j >=0; j--)
    //     {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    
                    // output: 3 2 1 
                    //         6 5 4 
                    //         9 8 7 



    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int value = 1;
    int t = 0, b = 2;
    int left = 0, right = 2;

    while (t <= b && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            arr[t][i] = value++;
        }
        t++;
        for (int i = t; i <= b; i++) 
        {
            arr[i][right] = value++;
        }
        right--;
        if (t <= b)
        {
            for (int i = right; i >= left; i--)
            {
                arr[b][i] = value++;
            }
            b--;
        }
        if (left <= right) 
        {
            for (int i = b; i >= t; i--) 
            {
                arr[i][left] = value++;
            }
            left++;
        }
    }
    printf("Spiral Pattern:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
         {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

                //   output: Spiral Pattern:
                //           1  2  3       
                //           8  9  4       
                //           7  6  5      



            // to print Z
             
}

                    
