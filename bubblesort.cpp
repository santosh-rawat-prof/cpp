#include <iostream>

using namespace std;

int main()
{
    int i, j, temp;
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

    cout<<"\n Bubble sort begins....";

    for(i = 4; i > 0; i--)
    {
        for(j = 0; j < i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"\n Bubble sort ends....";

    cout<<"\n After sorting elements are :";

    for(i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n";

    return 0;
}