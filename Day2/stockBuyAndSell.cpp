#include<bits/stdc++.h>
using namespace std;
int stockBuySell(vector<int> &arr){
    int minVal=INT_MAX;
    int maxPro=0;
    for(int i=0;i<arr.size();i++){
        minVal=min(minVal,arr[i]);
        maxPro=max(maxPro,arr[i]-minVal);
    }
    return maxPro;
}
int main(){
    vector<int> arr={7,1,4,5,6,3};
    int ans=stockBuySell(arr);
    cout<<ans;
}