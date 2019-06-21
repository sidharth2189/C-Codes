/* Arrange array elements in ascending order - Brute Force Method */

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1, 7, 8, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for (int k = 0; k < size; k++)
    {
        cout<<arr[k]<<" ";
    }

    return 0;
}