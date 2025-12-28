#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the count of fibonacci numbers you want?? ";
    cin>>n;

    int a =0, b=1;

    cout<<a<<endl<<b<<endl;

    for (int count =0; count<n-2; count++)
    {
        // cout <<a<<endl;
        // cout<<b<<endl;
        // a=a+b;
        // b=a+b;
        int next = a + b;
        cout<<next<<endl;
        a = b;
        b = next;

        
    }

    
    return 0;
}