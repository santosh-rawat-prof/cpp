#include <iostream>
using namespace std;

void insert(int arr[], int n);

int main()
{
    int n, i;

    cout<<"\n Enter size of the array to put elements in: ";    //Size of Array
    cin>>n;

    int arr[n];

    cout<<"\n Enter "<<n<<" elements to insert in array: \n\n "; //Input of elements
    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n Entered elements in array are: \n\n";     //Display Entered elements
    for(i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n\n Sorting begins...\n";

    insert(arr, n);

    cout<<"\n Sorting ends...\n";

    cout<<"\n After Sorting elements are : \n\n";

    for(i = 0; i < n; i++)  //Display After sort
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n\n";

    return 0;
}

void insert(int arr[], int n) /* function to sort rrn array with insertion sort */  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = arr[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= arr[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            arr[j+1] = arr[j];     
            j = j-1;    
        }    
        arr[j+1] = temp;    
    }  
}


/*
OUTPUT:

 Enter size of the array to put elements in: 5

 Enter 5 elements to insert in array: 

 5 4 3 2 1

 Entered elements in array are: 

 5 4 3 2 1

 Sorting begins...

 Sorting ends...

 After Sorting elements are : 

 1 2 3 4 5

*/