#include<iostream>

using namespace std;

int main()
{
	int i,j,m,n;
	int mat1[100][100], mat2[100][100], mat3[100][100];
	
	cout<<"\n Enter order of the matrix: ";
	cin>>m>>n;
	
	//INPUT
	
	cout<<"\n Enter the matrix 1 elemets: \n";
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin>>mat1[i][j];
		}
	}
	
	cout<<"\n Enter the matrix 2 elemets: \n";
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cin>>mat2[i][j];
		}
	}
	
	//PROCESS FOR SUM
	
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	//OUTPUT FOR SUM
	
	cout<<"\n Sum of two matrices are: \n";
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//PROCESS FOR TRANSPOSE OF MATRIX 1
	
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			mat3[i][j] = mat1[j][i];
		}
	}
	
	//OUTPUT FOR TRANSPOSE OF MATRIX 1
	cout<<"\n Transposese of matrix 1 is: \n";
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//PROCESS FOR TRANSPOSE OF MATRIX 2
	
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			mat3[i][j] = mat2[j][i];
		}
	}
	
	//OUTPUT FOR TRANSPOSE OF MATRIX 2
	cout<<"\n Transpose of matrix 2 is: \n";
	for(i  = 0; i < m; i++)
	{
		for(j = 0; j < n; j++)
		{
			cout<<mat3[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}