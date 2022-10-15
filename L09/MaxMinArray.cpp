#include <iostream>
using namespace std;

int getmax(int digit[], int size)
{
    int maximum = INT_MIN;
    for (int i = 0; i < size; i++)
    {

        maximum = max(maximum, digit[i]);
        /* if(maximum<digit[i]) {
            maximum = digit[i];
        } */
    }
    return maximum;
}

int getmin(int digit[], int size)
{
    int minimum = INT_MAX;
    for (int i = 0; i < size; i++)
    {

        minimum = min(minimum, digit[i]);
        /* if(minimum>digit[i]) {
             minimum = digit[i];
         } */
    }
    return minimum;
}

int main()
{

    int size;
    cout << "Enter the array size" << endl;
    cin >> size;

    int digit[1000];

    // taking input in array
    cout << "Enter the value" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> digit[i];
    }

    cout << "Maximum value is " << getmax(digit, size) << endl;
    cout << "Minimum value is " << getmin(digit, size);
    return 0;
}