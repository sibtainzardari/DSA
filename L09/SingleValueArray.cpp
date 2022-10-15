#include <iostream>
using namespace std;

int main() {
    //decleare and array of 1000 values
    int num[1000];

    //decleare single value 6 in whole array
    fill_n(num,1000,6);

    //taking sizeofarray only 10
    for(int i=0; i<10; i++) {
        cout<<num[15];
    }
    return 0;
}