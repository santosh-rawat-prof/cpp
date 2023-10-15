#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout<<"\n Enter any String in lowercase to convert it to uppercase: ";
    getline(cin,str);

    cout<<"\n After conversion to uppercase : ";

    for(int i = 0; i < str.length(); i++)
    {
        if(str.at(i) != 32)
        {
            char x = str.at(i);
            cout<<char(x - 32);
        }
        else
        {
            cout<<" ";
            continue;
        }
    } 
    cout<<"\n\n";

    return 0;
}