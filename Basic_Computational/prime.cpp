#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "what number do you wanna check ?? ";
    cin >> n;

    if (n == 1) {
        cout << "invalid";
        
    }
    if (n == 0) {
        cout << "invalid";
        
    }
    bool flag=true;
 
    for (int i=2; i <n/2; i++)
    {
        if(n%i == 0)
            flag=false;
    }
    if (flag == true)
        cout << "yes Prime number" << endl;
    else 
        cout<<"non prime number";
    return 0;
}
