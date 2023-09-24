#include <stdio.h>
//deleting element
void delete(int *arr,int *size,int index){
    if (index<0||index>*size)
    {
        printf("INVALID INDEX\n");
        return;
    }
    for (int i = index; i < *size; i++)
    {
        arr[i]=arr[i+1];
    }
    (*size)--;
}

int main(int argc, char const *argv[])
{
    int arr[]={10,20,30,40,50};
    int index,quit,size=5;

    do
    {
        printf("Enter the index: ");
        scanf("%d",&index);
        delete(arr,&size,index);
        printf("Press 0 if you want to quit:");
        scanf("%d",&quit);
    } while (!quit==0);
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
