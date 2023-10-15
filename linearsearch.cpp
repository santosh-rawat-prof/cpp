#include<iostream>

using namespace std;

int main()
{
    int i, x, counter = 0;
    int arr[5];

    cout<<"\n Enter elements of array: ";

    for(i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Entered elements are :";

    for(i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n Enter element to search: ";
    cin>>x;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == x)
            counter++;
    }

    if(counter == 0)
        cout<<"\n "<<x<<" is not found !!";
    else
        cout<<"\n "<<x<<" is found counter times !!";
}