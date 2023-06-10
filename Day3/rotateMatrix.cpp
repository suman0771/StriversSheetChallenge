#include <bits/stdc++.h>
using namespace std;
void rotateSquareMatrix(vector<vector<int>> &mat)
{
    int n = mat.size();
    // transpose of matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }
    // reverse each row of matrix
    for (int i = 0; i < n; i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<"Original Matrix: "<<endl;
    for (auto it : mat)
    {
        for (auto jt : it)
        {
            cout << jt << " ";
        }
        cout << endl;
    }
    rotateSquareMatrix(mat);
    cout<<"Rotated Matrix: "<<endl;
    for (auto it : mat)
    {
        for (auto jt : it)
        {
            cout << jt << " ";
        }
        cout << endl;
    }
}