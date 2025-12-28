#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the num ";
    int sum=0;
    cin>>n;
    while(n!=0)
    {
        sum= sum + n/10;
        n=n/10;
    }

    cout<<" sum of digits is =  "<<sum;
    return 0;
}