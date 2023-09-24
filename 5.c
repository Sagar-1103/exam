#include <stdio.h>
//binary search
void binarySearch(int arr[], int size, int element)
{
    int high = size - 1, mid, low = 0;
    while (low<=high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == element)
        {
            printf("Element found at index : %d ", mid);
            break;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 5, 6, 7, 22, 35, 45, 50, 66};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 55;
    binarySearch(arr, size, element);
    return 0;
}
