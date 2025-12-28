#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the num ";
    int count=0;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }

    cout<<"count of digits is = "<<count;
    return 0;
}