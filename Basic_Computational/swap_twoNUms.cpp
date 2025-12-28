#include<iostream>
using namespace std;

int main()
{
    int a= 5;
    int b= 10;
    cout<<a<<" " << b<<endl;

    int c= a ;
    a=b;
    b=c;

    cout<<a<<" " << b<<endl;


    //without third variable 
    int d=7, e=3;
    cout<<d<<" " << e<<endl;
    d=d+e;
    e=d-e;
    d=d-e;
    cout<<d<<" " << e<<endl;





    return 0;
}
