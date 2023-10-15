#include<iostream>

using namespace std;

int main()
{
	int num[10];
	int i,j,temp;
	
	cout<<"\n Enter any ten integers: ";
	for(i = 0; i < 10; i++)
	{
		cin>>num[i];
	}
	
	cout<<"\n Given list: ";
	for(i = 0; i < 10; i++)
	{
		cout<<" "<<num[i];
	}
	
	//Sorting Ascending
	for(i = 0; i < 10; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			if(num[i] > num[j])
			{
				// Interchanging values
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	cout<<"\n Ascending sorted list: ";
	for(i = 0; i < 10; i++)
	{
		cout<<" "<<num[i];
	}
		
	//Sorting Descending
	for(i = 0; i < 10; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			if(num[i] < num[j])
			{
				// Interchanging values
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}		
	
	cout<<"\n Descending sorted list: ";
	for(i = 0; i < 10; i++)
	{
		cout<<" "<<num[i];
	}
	
	return 0;
}