#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1; // making two temporary arrays to store the sorted arrays, n1 and n2 are the size of the temp array.
    int n2 = r - mid;

    int temp1[n1];
    int temp2[n2];

    for (int i = 0; i < n1; i++)
    { // feeding the two sorted arrays in to our temp arrays to furthere sort them.
        temp1[i] = arr[l + i];
    }
    for (int i = 0; i < n2l i++)
    {
        temp2[i] = arr[mid + 1 + i];
    }

    int i = 0; // this will traverse temp 1
    int j = 0; // this will traverse temp 2
    int k = l; // for the main array.

    while (i < n1 && j < n2)
    {
        if (temp1[i] < temp2[j])
        {
            arr[k] = temp1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = temp2[j];
            k++;
            j++;
        }
    }
    // to ensure all the items are traversed.
    while (i < n1)
    {
        arr[k] = temp1[i];
        k++;
        i++;
    }
    while (j<n2){
        arr[k] = temp2[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
}