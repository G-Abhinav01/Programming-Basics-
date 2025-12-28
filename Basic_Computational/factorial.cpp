#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "what number's fact do you want ?? ";
    cin >> n;

    if (n == 1) {
        cout << 0;
        
    }
    if (n == 0) {
        cout << 1;
        
    }

    long long fact =1;
 
    for (int i=1; i <=n; i++)
    {
        fact= fact*i;
    }

    cout << fact << endl;
    return 0;
}
