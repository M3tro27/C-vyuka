#include <iostream>

using namespace std;

void Prohod(int* ptrA, int* ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a = 5;
    int b = 10;

    cout << "Pred prohozenim: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    int* ptrA = &a;
    int* ptrB = &b;

    Prohod(ptrA, ptrB);

    cout << "Po prohozeni: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}