#include<Stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int i,max,min,size;
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        scanf("%d" , &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i =1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    if(arr[i] < min)
    {
        min = arr[i];
    }
    printf("maximum element =%d\n" , max);
    printf("minimum element =%d\n" , min);
    return 0;
}