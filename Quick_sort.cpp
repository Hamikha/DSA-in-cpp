#include <iostream>

using namespace std;

void Swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int Partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    while(i<=j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            Swap(&arr[i],&arr[j]);
        }
    }
    Swap(&arr[j],&arr[low]);
    return j;
}

void Quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pivot = Partition(arr,low,high);
        Quicksort(arr,low,pivot-1);
        Quicksort(arr,pivot+1,high);

    }
}

int main()
{
    int Size;
    cout<<"Enter the length of an array :"<<endl;
    cin>>Size;
    int arr[Size];
    cout<<"Enter the elements of an array :"<<endl;
    for(int i=0; i<Size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting :"<<endl;
    for(int i=0; i<Size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Quicksort(arr,0,Size-1);
    cout<<"After Sorting :"<<endl;
    for(int i=0; i<Size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
