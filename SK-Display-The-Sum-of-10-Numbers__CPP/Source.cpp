#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cout << "\n Enter [" << i << "] : ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "\n Sum of 10 number is : " << sum;

    _getch();
    return 0;
}


