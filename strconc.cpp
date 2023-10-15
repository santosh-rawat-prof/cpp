#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    cout<<"\n Enter first string: ";
    getline(cin,str1);

    cout<<"\n Enter second string: ";
    getline(cin,str2);

    cout<<"\n After Concatenation the string will be: "<<str1<<" "<<str2<<"\n\n";

    return 0;
}