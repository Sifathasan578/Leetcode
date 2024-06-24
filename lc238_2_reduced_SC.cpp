#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, 1);

    // Calculate prefix products and store in res
    for (int i = 1; i < n; i++) {
        res[i] = res[i - 1] * nums[i - 1];
    }

    // Calculate suffix products on the fly and update res
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1];
        res[i] *= suffix;
    }

    return res;

    // TC: O(n)
    // SC: O(1)
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> res = productExceptSelf(nums);
    for (int i : res) {
        cout << i << " ";
    }
}
