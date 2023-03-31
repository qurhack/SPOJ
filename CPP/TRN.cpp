//https://pl.spoj.com/problems/TRN/

#include <iostream>

using namespace std;

int main()
{
    int rows, columns; //m, n
    cin >> rows;
    cin >> columns; 
    
    //creating matrix array with dynamic memory allocation
    int **matrix = new int*[columns];
    for(int z = 0; z < columns; z++) 
    {
        matrix[z] = new int[rows];
    }
    
    //adding nums to their rows and columns
    int num;
    for(int i = 0; i < rows; i++)
    {
        
        for(int j = 0; j < columns; j++)
        {
            cin >> num;
            matrix[j][i] = num;
        }
    }
    
    //showing transponed matrix
    for(int i = 0; i < columns; i++)
    {
        
        for(int j = 0; j < rows; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    //clearing memory
    for(int z = 0; z < columns; z++) 
    {
        delete [] matrix[z];
    }
    delete [] matrix;
    
}


