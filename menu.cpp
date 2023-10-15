#include<iostream>

using namespace std;

class Menu
{
	
	public:
	
	void sum()
	{
		int m, n;
		
		//Input
		cout<<"\n Enter the order of the matrix: \n";
		cin >> m >> n;
		
		int i, j;
		int mat1[m][n], mat2[m][n], mat3[m][n];
		
		cout<<"\n Input the matrix 1 elements: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cin >> mat1[i][j];
		}
		
		cout<<"\n Input the matrix 2 elements: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cin >> mat2[i][j];
		}	

		//Process
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				mat3[i][j] = mat1[i][j] + mat2[i][j];
			}
		}
		
		//Output
		cout<<"\n Addition of the two matrices are: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cout << mat3[i][j] << " ";
			cout << endl;
		}
	}
	
	void sub()
	{
		int m, n;
		
		//Input
		cout<<"\n Enter the order of the matrix: \n";
		cin >> m >> n;
		
		int i, j;
		int mat1[m][n], mat2[m][n], mat3[m][n];
		
		cout<<"\n Input the matrix 1 elements: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cin >> mat1[i][j];
		}
		
		cout<<"\n Input the matrix 2 elements: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cin >> mat2[i][j];
		}
		
		//Process
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
			{
				mat3[i][j] = mat1[i][j] - mat2[i][j];
			}
		}
		
		//Output
		cout<<"\n Substraction of the two matrices are: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cout << mat3[i][j] << " ";
			cout << endl;
		}
	}

	void mul()
	{
		int m, n, p, q, c, d, k, sum = 0;
		int mat1[10][10], mat2[10][10], mat3[10][10];
		
		//Input
		cout << "\nEnter number of rows and columns of matrix1:\n";
		cin >> m >> n;
		
		cout << "\nEnter elements of matrix 1:\n";
		for (c = 0; c < m; c++)
			for (d = 0; d < n; d++)
				cin >> mat1[c][d];

		cout << "\nEnter number of rows and columns of matrix2:\n";
		cin >> p >> q;

		if (n != p)		//Number of Columns of 1st matrix should be same as number of Rows of 2  
			cout << "\nThe matrices can't be multiplied with each other.\n";
		else
		{
			cout << "\nEnter elements of matrix2\n";
			for (c = 0; c < p; c++)
				for (d = 0; d < q; d++)
					cin >> mat2[c][d];

			//Process
			for (c = 0; c < m; c++) 
			{
				for (d = 0; d < q; d++) 
				{
					for (k = 0; k < p; k++) 
					{
						sum = sum + mat1[c][k]*mat2[k][d];
					}
	
					mat3[c][d] = sum;
					sum = 0;
				}
			}

			//Output
			cout << "\nProduct of the matrices are: \n";

			for (c = 0; c < m; c++) 
			{
				for (d = 0; d < q; d++)
					cout << mat3[c][d] << " ";
				cout << endl;
			}
		}
	}
	
	void trans()
	{
        int m, n;
		
		//Input
		cout<<"\n Enter the order of the matrix: \n";
		cin >> m >> n;
		
		int i, j;
		int mat1[m][n], mat2[m][n], transpose[10][10];
		
		cout<<"\n Input the matrix elements: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cin >> mat1[i][j];
		}
		
		/*cout<<"\n Input the matrix 2 elements: \n";
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < n; j++)
				cin >> mat2[i][j];
		}*/
		
		//Process
		for(i = 0; i<m; i++)
		{
			for(j = 0; j<n; j++)
			{
				transpose[j][i] = mat1[i][j];
			}
		}
		
		//Output
		cout<<"\n The transpose of matrix is: \n";
		for(i = 0; i<n; i++)
		{
			for(j = 0; j<m; j++)
			{
				cout<<transpose[i][j]<<" ";
			}
			cout<<endl;
		}
		/*
		//Process
		for(i = 0; i<m; i++)
		{
			for(j = 0; j<n; j++)
			{
				transpose[j][i] = mat2[i][j];
			}
		}
		
		//Output
		cout<<"\n The transpose of matrix 2 is: \n";
		for(i = 0; i<n; i++)
		{
			for(j = 0; j<m; j++)
			{
				cout<<transpose[i][j]<<" ";
			}
			cout<<endl;
		}*/
	}
};

int main()
{
	int ch;
	
	Menu obj;
	
	cout<<"\n Press 1 for addition of two matrices,";
	cout<<"\n Press 2 for substraction of two matrices,";
	cout<<"\n Press 3 for multiplication of two matrices";
	cout<<"\n Press 4 for transpose of a matrix";
	cout<<"\n Eter your choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1: obj.sum();
				break;
				
		case 2: obj.sub();
				break;
				
		case 3: obj.mul();
				break;
				
		case 4: obj.trans();
				break;		
		
		default: cout<<"\n Wrong choice";
				 break;
	}
	return 0;
}