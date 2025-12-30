#include<iostream>
#include<string>

using namespace std;

int main()
{
    
    {
    string str; 
    cout<<"enter a string ";
    cin>>str;
    cout<< str <<" < - this is your string \n";
    }

    {
    string str1(5, 'n');
    cout<<str1<<" < - this is your string \n ";
    }

    {
        string str2 = "Hello_World!";
        cout<<str2<<" < - this is your string \n ";
    }
    return 0;




}