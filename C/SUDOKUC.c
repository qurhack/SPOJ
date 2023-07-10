// https://pl.spoj.com/problems/SUDOKUC/

#include <stdio.h>
#include <stdint.h>

#define SUDOKU_SIZE 9 // 9x9

#define SQUARE_SIZE 3 // 3x3

#define MIN_SUDOKU_NUM 1
#define MAX_SUDOKU_NUM 9

#define TRUE 1
#define FALSE 0

int aiSudokuBoard[SUDOKU_SIZE][SUDOKU_SIZE];

uint8_t CheckNumber(int a_iNumCheck)
{
    if((MIN_SUDOKU_NUM > a_iNumCheck) || (MAX_SUDOKU_NUM < a_iNumCheck))
    {
        return FALSE;
    }
    return TRUE;
}

uint8_t CheckRow(uint8_t a_u8Row, uint8_t a_u8Column, int a_iNumCheck)
{
    for(uint8_t u8ColumnCheck = a_u8Column+1u; (u8ColumnCheck < SUDOKU_SIZE); u8ColumnCheck++)
    {
        if(a_iNumCheck == aiSudokuBoard[a_u8Row][u8ColumnCheck])
        {
            return FALSE;
        }
    }
    return TRUE;
}

uint8_t CheckColumn(uint8_t a_u8Row, uint8_t a_u8Column, int a_iNumCheck)
{
    for(uint8_t u8RowCheck = a_u8Row+1U; (u8RowCheck < SUDOKU_SIZE); u8RowCheck++)
    {
        if(a_iNumCheck == aiSudokuBoard[u8RowCheck][a_u8Column])
        {
            return FALSE;
        }
    }
    return TRUE;
}

uint8_t DetectSquareRow(uint8_t a_u8Row)
{
    if(a_u8Row < (SQUARE_SIZE-2) * SQUARE_SIZE)
    {
        return (SQUARE_SIZE-2) * SQUARE_SIZE;
    }
    else if(a_u8Row < (SQUARE_SIZE-1) * SQUARE_SIZE)
    {
        return (SQUARE_SIZE-1) * SQUARE_SIZE;
    }
    else if(a_u8Row < SQUARE_SIZE * SQUARE_SIZE)
    {
        return SQUARE_SIZE * SQUARE_SIZE;
    }
}
uint8_t DetectSquareColumn(uint8_t a_u8Column)
{
    if(a_u8Column < (SQUARE_SIZE-2) * SQUARE_SIZE)
    {
        return (SQUARE_SIZE-2) * SQUARE_SIZE;
    }
    else if(a_u8Column < (SQUARE_SIZE-1) * SQUARE_SIZE)
    {
        return (SQUARE_SIZE-1) * SQUARE_SIZE;
    }
    else if(a_u8Column < SQUARE_SIZE * SQUARE_SIZE)
    {
        return SQUARE_SIZE * SQUARE_SIZE;
    }
}

uint8_t CheckSquare(uint8_t a_u8Row, uint8_t a_u8Column, int a_iNumCheck)
{
    uint8_t u8MaxRow = DetectSquareRow(a_u8Row);
    uint8_t u8MinRow = u8MaxRow - 3U;

    uint8_t u8MaxColumn = DetectSquareColumn(a_u8Column);
    uint8_t u8MinColumn = u8MaxColumn - 3U;

    uint8_t u8OccuranceCounter = 0U;

    for(uint8_t u8Row = u8MinRow; u8Row < u8MaxRow; u8Row++)
    {
        for(uint8_t u8Column = u8MinColumn; u8Column < u8MaxColumn; u8Column++)
        {
            if(a_iNumCheck == aiSudokuBoard[u8Row][u8Column])
            {
                u8OccuranceCounter++;
            }
            
            if(1U < u8OccuranceCounter)
            {
                return FALSE;
            }
        }
    }
    return TRUE;
}

uint8_t CheckSudoku(uint8_t a_u8Row, uint8_t a_u8Column, int a_iNumCheck)
{
    if
    (   
        (TRUE == CheckNumber(a_iNumCheck))
        && (TRUE == CheckRow(a_u8Row, a_u8Column, a_iNumCheck)) 
        && (TRUE == CheckColumn(a_u8Row, a_u8Column, a_iNumCheck))
        && (TRUE == CheckSquare(a_u8Row, a_u8Column, a_iNumCheck))         
    )
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    // Get test cases
    uint64_t u64TestCases = 0ULL;
    scanf("%lu", &u64TestCases);
    for(uint64_t u64TestCase = 0ULL; u64TestCase < u64TestCases; u64TestCase++)
    {
        // Get Sudoku input
        for(uint8_t u8Row = 0U; u8Row < SUDOKU_SIZE; u8Row++)
        {
            for(uint8_t u8Column = 0U; u8Column < SUDOKU_SIZE; u8Column++)
            {
                scanf("%d", &aiSudokuBoard[u8Row][u8Column]);
            }
        }

        // Check Sudoku
        uint8_t u8IsUnique = TRUE;
        for(uint8_t u8Row = 0U; (u8Row < SUDOKU_SIZE) && (TRUE == u8IsUnique); u8Row++)
        {
            for(uint8_t u8Column = 0U; (u8Column < SUDOKU_SIZE)  && (TRUE == u8IsUnique); u8Column++)
            {
                u8IsUnique = CheckSudoku(u8Row, u8Column, aiSudokuBoard[u8Row][u8Column]);
            }
        }

        // Check answer
        if(TRUE == u8IsUnique)
        {
            printf("TAK\n");
        }
        else
        {
            printf("NIE\n");
        }
    }
}