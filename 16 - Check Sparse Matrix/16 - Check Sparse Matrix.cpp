#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void PrintArrayInMatrix(short arr[3][3], short rows, short cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%0*d\t", 2, arr[i][j]);
        }
        cout << endl;
    }
}

short CountInMatrix(short Matrix[3][3], short Row, short Col, short Number)
{
    short Count = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (Matrix[i][j] == Number)
            {
                Count++;
            }
        }
    }

    return Count;
}

bool IsSparseMatrix(short Matrix[3][3], short Row, short Col)
{
    short MatrixSize = Row * Col;
    return (CountInMatrix(Matrix, Row, Col, 0) >= (MatrixSize / 2));
}

int main()
{
    short arr1[3][3] = { {0,0,1},{0,0,12},{0,0,9} };
    short cols = 3, rows = 3;

    cout << "Matrix:\n";
    PrintArrayInMatrix(arr1, rows, cols);

    if (IsSparseMatrix(arr1,cols,rows))W
    {
        cout << "Yes: It's Sparse";
    }
    else
    {
        cout << "No: It'n not Sparse";
    }

    return 0;
}