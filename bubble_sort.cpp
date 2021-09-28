#include<stdio.h>
void swap(int *x, int *y)
{
int temp;
temp= *x;
*x = *y;
*y = temp;
}
void print_array(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void bubble_sort(int* arr,int n)
{
    for(int i=0;i<n;i++)   // For number of passes
    {
        for(int j=0;j<n-1;j++) // for comparison in each pass
        {
            if(arr[j]>arr[j+1])
            swap( &arr[j], &arr[j+1]);
        }
    }
}
void bubble_sort_2(int* arr,int n)
{
    for(int i=0;i<n;i++)   // For number of passes
    {
        for(int j=0;j<n-1;j++) // for comparison in each pass
        {
            if(arr[j]>arr[j+1])
            swap( &arr[j], &arr[j+1]);
        }
    }
}
int main()
{
    int n;
    printf("Enter range of Array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array:");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    print_array(arr,n); // Printing array before sorting.
    int ch;
    printf("\nEnter 1 for Bubble sort.\nEnter 2 for bubble sort with less no. of passes.");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 : {
            bubble_sort(arr , n); // Printing array after sorting.
            break;
            }
    case 2 : {
            bubble_sort_2(arr , n); // Printing array after sorting with less number of passes.
            break;
            }
    }
    print_array(arr , n);

return 0;
}

