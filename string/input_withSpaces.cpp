#include<iostream>
#include<string >
using namespace std;


int main(){

    string sentence;
    cout<<" enter your string ";
    getline(cin,sentence);

    cout<<sentence<<" < - this is your sentence "<<endl;

    string str2 = "mat kar lala !!";
    cout<<"this is your string with spaces and is valid : -> \n"<<str2<<endl;
    return 0;
}