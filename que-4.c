#include <stdio.h>
int main()
{
    int arr[5] = {2,4,6,8,10};
    printf("original number : ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int *ptr = arr;
    printf("\nsquare number : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", (*(ptr + i)) * (*(ptr + i)));
    }
    return 0;
}