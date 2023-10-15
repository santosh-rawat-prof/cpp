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

    cout<<"\n Selection sort begins....";

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"\n Selection sort ends....";

    cout<<"\n After sorting elements are :";

    for(i = 0; i < 5; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n";

    return 0;
}