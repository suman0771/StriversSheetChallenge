#include <bits/stdc++.h>
using namespace std;
void sort012(vector<int> &arr)
{
    int n = arr.size();
    // 3 pointer approach
    int start = 0, end = n - 1, mid = 0;
    while (mid <= end)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[start++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[end--]);
            break;
        }
    }
}
int main()
{
    vector<int> arr = {1, 2, 0, 2, 1};
    sort012(arr);
    for (auto it : arr)
    {
        cout << it << " ";
    }
}