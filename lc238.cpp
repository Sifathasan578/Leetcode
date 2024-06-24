#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre(n), suf(n), res(n);

    for (int i = 0, j = n - 1; i < n; i++, j--) {
        if (i == 0) {
            pre[i] = nums[i];
        }
        else {
            pre[i] = pre[i - 1] * nums[i];
        }

        if (j == n - 1) {
            suf[j] = nums[j];
        }
        else {
            suf[j] = suf[j + 1] * nums[j];
        }
    }

    res[0] = suf[1];
    res[n - 1] = pre[n - 2];
    for (int i = 1; i < n - 1; i++) {
        res[i] = pre[i - 1] * suf[i + 1];
    }

    return res;

    // TC: O(n)
    // Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> res = productExceptSelf(nums);
    for (int i: res) {
        cout << i << " ";
    }
}
