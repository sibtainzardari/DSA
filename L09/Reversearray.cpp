#include <iostream>
using namespace std;

// printing Array

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Reverse the array

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[10] = {19, 44, 31, 12, 9, 15, 10, 21, 67, 98};

    reverse(arr, 10); // Reverse function call

    printarray(arr, 10); // Print function call

    return 0;
}