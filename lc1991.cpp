#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int findMiddleIndex(vector<int>& nums) {
    int n = nums.size();
    vector<int> suf(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) {
            suf[i] = nums[i];
        }
        else {
            suf[i] = nums[i] + suf[i + 1];
        }
    }

    suf[n] = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (sum == suf[i + 1]) {
            return i;
        }
        sum += nums[i];
    }
    return -1;

    // TC: O(n), same as: 724
}

int main() {
    // string s, t; cin >> s >> t;
    // cout << isAnagram(s, t) << "\n";

    int n; cin >> n;
    vector<int> vec1;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vec1.push_back(k);
    }
    cout << pivotIndex(vec1) << "\n";
}
