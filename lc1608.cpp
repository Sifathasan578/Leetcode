#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int specialArray(vector<int>& nums) {
    int n = nums.size();
    for (int x = n; x >= 0; x--) {
        int cnt = 0;
        for (int i : nums) {
            if (i >= x) cnt++;
        }
        if (cnt == x) return x;
    }
    return -1;

    // TC: O(n ^ 2)
    // O(nlogn) and O(n) possible
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
