#include <iostream>

using namespace std;

int rec(int n);

int main()
{
    int n, a;

    cout<<"\n Enter any number: ";
    cin>>n;

    a = rec(n);

    if(a == n)
        cout<<"\n "<<n<<" is palindrome\n";
    else
        cout<<"\n "<<n<<" is not a palindrome\n";

    return 0;
}

int rec(int n)
{
    int r;
    static int s = 0;
    if(n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        rec(n/10);
    }
    else
    {
        return s;
    }

    return s;
}