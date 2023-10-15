#include<iostream>

using namespace std;

int main()
{
	int i, j, k, m, n;
	int mat1[100][100], mat2[100][100], mat3[100][100];
	
	cout<<"\n Enter the size of both the matrix in rows and columns : ";
	cin>>m>>n;
	
	// INPUT OF ELEMENTS IN MATRIX
	
	cout<<"\n Enter the elements for matrix 1 : \n\n";
	for(i = 0; i < m; i++)
	{
		cout<<" ";
		for(j = 0; j < n; j++)
		{
			cin>>mat1[i][j];
		}
	}
	
	cout<<"\n Enter the elements for matrix 2 : \n\n";
	for(i = 0; i < m; i++)
	{
		cout<<" ";
		for(j = 0; j < n; j++)
		{
			cin>>mat2[i][j];
		}
	}
	
	// MULTIPLICATION PROCESS
	
	for(i = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			mat3[i][j] = 0;
			
			for(k = 0; k < n; k++)
			{
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	
	//OUTPUT
	
	cout<<"\n After multiplying both the matrices, we get the matrix: \n\n"; 
	for(i = 0; i < m; i++)
	{
		cout<<" ";
		for(j = 0; j < n; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	
	return 0;
}
