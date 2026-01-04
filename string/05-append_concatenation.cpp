#include<iostream>

using namespace std;


int main()
{
    string s1 = "Hello-";
    string s2 = "World!";

    s1.append(s2); // or essentially , s1= s1+s2;
    	
    cout<<s1<<endl;
    //or you can just do :  cout<<s1+s2;
    // as simple as that 

    return 0;
}