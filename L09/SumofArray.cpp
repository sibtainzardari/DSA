#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int sum = 0;
    int num[5] = {4, 3, 91, -3, 1};

    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    cout << sum << endl;

    return 0;
}