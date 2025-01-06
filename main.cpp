#include<iostream>
using namespace std;

void add(int a, int b);

int main() {
    cout << "Hello World!";
    add(1, 2);
    system("pause");
    return 0;
}

void add(int a, int b) {
    cout << a + b;
}