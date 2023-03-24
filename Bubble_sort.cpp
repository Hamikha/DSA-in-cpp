#include <iostream>
using namespace std;

int *selection_Sort(int *arr,int Size)
{
    int i,j,min_index,temp;
    for(i=0; i<Size-1; i++)
    {
        min_index = i;
        for(j=i+1; j<Size; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index!=i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    return arr;
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
        cout<<i<<"::"<<arr[i]<<endl;
    }

    int *sorted_Array = selection_Sort(arr,Size);
    cout<<"After Sorting :"<<endl;
    for(int i=0; i<Size; i++)
    {
        cout<<i<<"::"<<sorted_Array[i]<<endl;
    }

    return 0;
}
