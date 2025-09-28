#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> &arr) {
    int l = 0, r = arr.size() - 1;
    while (l < r) {
        if (arr[l] != arr[r]) return false;
        l++, r--;
    }
    return true;
}

bool check(vector<int> &arr, int x) {
    vector<int> filtered;
    for (int num : arr) {
        if (num != x) filtered.push_back(num);
    }
    return isPalindrome(filtered);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int l = 0, r = n - 1;
        while (l < r && arr[l] == arr[r]) {
            l++, r--;
        }

        if (l >= r) {
            cout << "YES\n";
        } else {
            if (check(arr, arr[l]) || check(arr, arr[r])) 
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }


    return 0;
}
