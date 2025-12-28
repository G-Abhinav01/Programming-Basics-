#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the nth fibonacci number you need?? ";
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    }
    if (n == 2) {
        cout << 1;
        return 0;
    }

    int a = 0, b = 1;
    int next;

    for (int count = 3; count <= n; count++)
    {
        next = a + b;
        a = b;
        b = next;
    }

    cout << next << endl;
    return 0;
}
