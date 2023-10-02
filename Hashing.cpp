#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string st;
    cin >> st;

    // precompute
    // int hash[26] = {0};
    int hash[256]={0}; // for all ascii values
    for (int i = 0; i < n; i++)
    {
        // hash[st[i] - 'a']++;
        hash[st[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        // cout << hash[c - 'a'] << endl;
        cout << hash[c] << endl;
    }
}

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

// //precompute
//     int hash[23]={0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int num;
//         cin >> num;
//         //fetch
//         cout<<hash[num]<<endl;
//     }
// }