#include <iostream>
#include <bits/stdc++.h>
using namespace std;


bool notInRow(const vector<string> &A, int row)
{
    
    set<char> st;
 
    for (int i = 0; i < 9; i++) {
 
    
        if (st.find(A[row][i]) != st.end())
            return false;
 
        if (A[row][i] != '.')
            st.insert(A[row][i]);
    }
    return true;
}

bool notInCol(const vector<string> &A, int col)
{
    set<char> st;
 
    for (int i = 0; i < 9; i++) {
 
        // If already encountered before, return false
        if (st.find(A[i][col]) != st.end())
            return false;
 
        // If it is not an empty cell,
        // insert value at the current cell in the set
        if (A[i][col] != '.')
            st.insert(A[i][col]);
    }
    return true;
}

bool notInBox(const vector<string> &A, int startRow, int startCol)
{
    set<char> st;
 
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            char curr = A[row + startRow][col + startCol];
 
           
            if (st.find(curr) != st.end())
                return false;
 
            if (curr != '.')
                st.insert(curr);
        }
    }
    return true;
}

bool isValid(const vector<string> &A, int row, int col)
{
    return notInRow(A, row) && notInCol(A, col) &&
           notInBox(A, row - row % 3, col - col % 3);
}

int isValidSudoku(const vector<string> &A) 
{
    int n = A[0].size();
 
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
           
            if (!isValid(A, i, j))
                return false;
        }
    }
    return true;
}   


int main()
{
  vector<string> A= {  "53..7....", "6..195...",
  ".98....6.", "8...6...3",
  "4..8.3..1", "7...2...6",
  ".6....28.", "...419..5", "....8..79"};
    cout << (isValidSudoku(A) ? "YES\n" : "NO\n");                      

}
