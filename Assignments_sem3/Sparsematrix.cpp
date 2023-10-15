/*
Write a program to convert a sparse matrix into an array representation in c/c++.
*/

#include<iostream>

using namespace std;

int main () 
{
    int i, j, k , l, m, n, count = 0;

    int sparsemat[100][100], arrayformmat[100][3];

    cout<<"\n Enter order of the matrix: ";
	cin>>m>>n;

    //INPUT OF ELEMENTS

    cout<<"\n Enter the elements of sparse matrix :\n\n";
    for(i  = 0; i < m; i++)
	{
        cout<<" ";
		for(j = 0; j < n; j++)
		{
			cin>>sparsemat[i][j];

            if(sparsemat[i][j] > 0)
            {
                for(k = count + 1 ; k <= m;)      //For Array Transformation
                {
                    for(l = 0; l < 3; l++)
                    {
                        if(l == 0)
                        {
                            arrayformmat[k][l] = i;
                        }
                        if(l == 1)
                        {
                            arrayformmat[k][l] = j;
                        }
                        if(l == 2)
                        {
                            arrayformmat[k][l] = sparsemat[i][j];
                        }
                    }
                break;
                }
            count++;        //For non-zero element counting
            }
		}
	}

    arrayformmat[0][0] = m;
    arrayformmat[0][1] = n;
    arrayformmat[0][2] = count;

    //After formatting to array form


    cout<<"\n\n After Array transormation the matrix will be :\n\n";

    for(k = 0; k <= count; k++)      //For Array Transformation
    {
        cout<<" ";
        for(l = 0; l < 3; l++)
        {
            cout<<arrayformmat[k][l]<<"   ";
        }
        cout<<"\n";
    }
    return(0);
}