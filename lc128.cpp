#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int longestConsecutive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    int n = nums.size(), cnt = 1, res = 0;
    for (int i = 1; i < n; i++) {
        if ((nums[i - 1] + 1) == nums[i]) {
            cnt++;
            res = max(res, cnt);
        }
        else {
            cnt = 1;
        }
    }
    res = max(res, cnt);
    if (n == 0) res = 0;
    return res;

    // TC: O(nlogn)
    // There is an O(n) solution: To-Do
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int res = longestConsecutive(nums);
    cout << res << "\n";
}
