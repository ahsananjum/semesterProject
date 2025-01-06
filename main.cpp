#include<iostream>
using namespace std;

void add(int a, int b);
void sub(int a, int b);

int main() {
    cout << "Hello World!";
    add(1, 2);
    sub(2, 1);
    system("pause");
    return 0;
}

void add(int a, int b) {
    cout << a + b;
}

void sub(int a, int b) {
    cout << a - b;
}