#include<bits/stdc++.h>
using namespace std;

//using STL inbuilt method: next_permutation()
void nextPermutation(vector<int> &perm){
    next_permutation(perm.begin(),perm.end());
}

//writting inbuilt next_permutation()
vector<int> writeNextPermutation(vector<int> &perm){
    int n=perm.size();
    //find the largest index k such that a[k]<a[k+1]
    int ind=-1;
    //find break point
    for(int i=n-2;i>=0;i--){
        if(perm[i]<perm[i+1]){
            //index i is break point
            ind=i;
            break;
        }
    }
    //if no such index is found, then the permutation is the last permutation
    //if no break point
    if(ind==-1){
        //reverse whole array
        reverse(perm.begin(),perm.end());
        return perm;
    }
    //find the largest index l greater than k such that a[k]<a[l]
    //find next greatest element and swap with arr[index]
    for(int i=n-1;i>ind;i--){
        if(perm[i]>perm[ind]){
            swap(perm[i],perm[ind]);
            break;
        }
    }
    //reverse the sequence from a[k+1] to a[n-1]
    //reverse right half
    reverse(perm.begin()+ind+1,perm.end());
    //don't forget to reverse from ind+1 to end()
    return perm;
}
int main(){
    vector<int> perm={2,1,5,4,3,0,0};
    cout<<"The Next Permutation of [";
    for(auto it:perm){
        cout<<it<<" ";
    }
    // nextPermutation(perm);
    writeNextPermutation(perm);
    cout<< "] is [";
    for(auto it:perm){
        cout<<it<<" ";
    }
    cout<<"]";
}