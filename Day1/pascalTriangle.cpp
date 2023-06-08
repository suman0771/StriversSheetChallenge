#include<bits/stdc++.h>
using namespace std;

// T.C. = O(n^2)  and S.C. = O(1)
vector<vector<long long int>> pascal(int n){
    vector<vector<long long int>> ans(n);
    for(int i=0;i<n;i++){
        ans[i].resize(i+1);
        ans[i][0]=ans[i][i]=1;
        for(int j=1;j<i;j++){
            ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<long long int>> result=pascal(n);
    for(auto it:result){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}