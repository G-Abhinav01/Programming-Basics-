#include<iostream>
#include<string>
using namespace std;


int main()
{
    string s1 = "Hello-";

    if(s1.empty()) cout<<"string is empty,\n";
    else cout<<"string is not empty \n";

    s1.clear();

    if(s1.empty()) cout<<"now string is empty \n";
    else cout<<"string is not empty \n";

    
    return 0;
}