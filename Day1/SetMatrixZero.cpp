#include <bits/stdc++.h>
using namespace std;
void rowmatrix(vector<vector<int>> &matrix, int n, int m, int i)
{
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void colmatrix(vector<vector<int>> &matrix, int n, int m, int j)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

// Brute Force : T.C.=O((n*m)*(n+m))  and S.C. = O(1)
vector<vector<int>> brute(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rowmatrix(matrix, n, m, i);
                colmatrix(matrix, n, m, j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

// Better Solution : T.C. = O(m*n) and S.C. = O(m)+O(n)
vector<vector<int>> setZero(vector<vector<int>> &matrix, int n, int m)
{
    vector<int> rows(n, -1), cols(m, -1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = 0;
                cols[j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (rows[i] == 0 || cols[j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

/*
vector<vector<int>> Optimize(vector<vector<int>> &matrix,int n, int m){
    // int rows=matrix.size();    matrix[0][..]
    // int cols=matrix[0].size();   matrix[..][0]
    int col0=1;
    for(int i=0;i<n;i++){
        if(matrix[i][0]==0) cols0=0;
        for(int j=1;j<m;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=matrix[i][0]=0;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
        if(col0==0){
            matrix[]
        }
    }
}
*/

int main()
{
    vector<vector<int>> matrix = {{1, 1, 0}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    cout << "Original Matrix : " << endl;
    for (auto it : matrix)
    {
        for (auto jt : it)
        {
            cout << jt << " ";
        }
        cout << endl;
    }
    // vector<vector<int>> ans = brute(matrix, n, m);
    vector<vector<int>> ans = setZero(matrix, n, m);
    // vector<vector<int>> ans = Optimize(matrix, n, m);

    cout << "Resultant Matrix : " << endl;
    for (auto it : ans)
    {
        for (auto jt : it)
        {
            cout << jt << " ";
        }
        cout << endl;
    }
}