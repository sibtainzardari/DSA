#include <iostream>
using namespace std;

// Searching Key

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[9] = {3, 6, 9, -11, 4, -7, 5, 44, 62};

    int key;
    cout << "Enter the key" << endl;
    cin >> key;

    // function call & save in found

    bool found = search(arr, 9, key);

    // Printing the value

    if (found)
        cout << "Key is Present" << endl;
    else
        cout << "Key is Absent" << endl;

    return 0;
}