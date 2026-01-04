#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1 = "ThalaForAReason";
    s1.erase(5,3);
    cout<<s1<<endl;

    
    
    cout<<s1.find("Reason")<<endl;

    

    return 0;

}