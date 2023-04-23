#include <stdio.h>
#include <conio.h>

int main()
{
    int sum = 0;
    int arr[40];
    int n,i;
    int left_sum,right_sum;
    printf("%d",sizeof(arr));
    printf("enter the number of elements \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the numeric vlaue to the array %d  ", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
     printf(" sum of the elements of array is \n %d",sum);
  
     
   
   

    return 0;
}