#include<iostream>

using namespace std;

int main()
{
    int i, x, low = 0, mid, high = 9, counter = 0;
    int arr[10];

    cout<<"\n Enter 10 elements of array in ascending order : ";

    for(i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Entered elements are :";

    for(i = 0; i < 10; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n Enter element to search : ";
    cin>>x;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(x == arr[mid])
        {
            counter++;
            break;
        }
        else if(x < arr[mid])
        {
            high = mid - 1;
        }
        else // x > arr[mid]
        {
            low = mid + 1;
        }
    }

    if(counter == 0)
        cout<<"\n "<<x<<" is not found !!";
    else
        cout<<"\n "<<x<<" is found "<<counter<<" times !!";

    return 0;
}

/*
OUTPUT:

 Enter 10 elements of array in ascending order : 5 10 15 20 25 30 35 40 45 50

 Entered elements are : 5 10 15 20 25 30 35 40 45 50
 Enter element to search : 35

 35 is found 1 times !!
 
*/