#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the num ";
    int rev=0;
    cin>>n;
    while(n!=0)
    {
        rev= rev*10 + (n%10);
        n=n/10;
    }

    cout<<"rev num is = "<<rev;
    return 0;
}