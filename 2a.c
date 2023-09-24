#include <stdio.h>

void arrPrinter(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insert(int arr[],int size,int value,int capacity){
    int index;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            int temp;
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            if (value>arr[i] && value<arr[j])
            {
                index = j;
            }  
        }
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    size++;
    arr[index]=value;
    printf("After Inserting: ");
    arrPrinter(arr,size);
}

int main(int argc, char const *argv[])
{
    int arr[100]={3,6,1,5,10,2};
    int value=7,size=6;
    
    printf("Before Inserting: ");
    arrPrinter(arr,size);
    insert(arr,size,value,100);
    return 0;
}
