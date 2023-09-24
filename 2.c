#include <stdio.h>

//inserting element

void arrPrinter(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insert(int arr[],int size,int value,int index,int capacity){
    if (index<0 || index>size)
    {
        printf("Invalid Index");
        return 0;
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
    int arr[100]={2,3,4,12,34,41};
    int index=3,value=7,size=6;
    
    printf("Before Inserting: ");
    arrPrinter(arr,size);
    insert(arr,size,value,index,100);
    return 0;
}
