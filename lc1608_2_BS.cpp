#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int specialArray(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // O(nlogn)
    int n = nums.size();

    for (int x = n; x >= 0; x--) {
        int idx = lower_bound(nums.begin(), nums.end(), x) - nums.begin(); // O(logn)
        int cnt = n - idx;

        if (cnt == x) return x;
    }
    return -1;

    // TC: O(nlogn)
}

int main() {
    int n, m; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int res = specialArray(nums);
    cout << res << "\n";
}
