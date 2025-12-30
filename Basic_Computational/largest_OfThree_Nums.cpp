#include <iostream>
using namespace std; 

int main ()
{
    int a = 12;
    int b = 69;
    int c = 25;

    int one = (a>b)?a:b;
    int max = (one>c)?one:c;
    cout << "this is the maximum : "<<max;
    return 0;
}