#include <iostream>

using namespace std;

int *inset_Sort(int *arr,int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    int *sorted_Array = inset_Sort(arr,Size);
    cout<<"After Sorting :"<<endl;
    for(int i=0; i<Size; i++)
    {
        cout<<i<<"::"<<*(sorted_Array+i)<<endl;
    }
    return 0;
}
