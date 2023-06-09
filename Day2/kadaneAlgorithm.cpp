#include<bits/stdc++.h>
using namespace std;

//brute force: T.C.= O(n^3) and S.C.= O(1)
int subarraySum(vector<int> &arr){
    int n=arr.size();
    int maxi=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            //sub-array = [i ...... j]
            //add all the elements of sub-array
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}

//better solution by removing 3rd for loop : T.C.= O(n^2) and S.C.= O(1)
int betterSolution(vector<int> &arr){
    int n=arr.size();
    int maxi=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(maxi,sum);
        }
    }
    return maxi;
}

//kadane's algorithm: O(n) and S.C.= O(1) 
int optimize(vector<int> &arr){
    int maxi=INT_MIN;
    int sum=0;
    for(auto i:arr){
        sum+=i;
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}



int main(){
    vector<int> arr={-2,-3,4,-1,-2,1,5,-3};
    // cout<<subarraySum(arr);
    // cout<<betterSolution(arr);
    cout<<optimize(arr);

}