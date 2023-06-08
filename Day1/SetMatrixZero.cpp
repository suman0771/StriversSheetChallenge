#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> setZero(vector<vector<int>> &matrix,int n, int m){
    vector<int> rows(n,-1),cols(m,-1);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                rows[i]=0;
                cols[j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rows[i]==0 || cols[j]==0){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = setZero(matrix, n, m);
    cout<<"Resultant Matrix : "<<endl;
    for(auto it: ans){
        for(auto jt: it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}