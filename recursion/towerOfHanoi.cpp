#include <iostream>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c) {
    if (n == 1) {
        cout << "Move disk 1 from " << a << " to " << c << endl;
        return;
    }

    towerOfHanoi(n - 1, a, c, b);        // Move n-1 disks from a to b using c
    cout << "Move disk " << n << " from " << a << " to " << c << endl;  // Move the largest disk
    towerOfHanoi(n - 1, b, a, c);        // Move n-1 disks from b to c using a
}

int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'a', 'b', 'c');
    return 0;
}