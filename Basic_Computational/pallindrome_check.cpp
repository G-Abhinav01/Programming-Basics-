#include<iostream>
using namespace std;


int main(){
    
    int n;
    int temp; 
    cout<<"enter num ";

    cin>>n;

    temp = n;
    int rev = 0;

    for (;n!=0; n=n/10)
    {
        rev = rev*10 + (n%10);
    }
    cout<<((rev==temp)?"true":"false"); //terniary operator, caution : wrap entier terniary into parenthesis :) 
                                        //thank me later :)
    return 0;
}