#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool isMonotonic(vector<int>& nums) {
    int n = nums.size();
    bool ok, okk;
    ok = okk = true;

    for (int i = 1; i < n; i++) {
        if (nums[i - 1] > nums[i]) {
            ok = false;
        }

        if (nums[i - 1] < nums[i]) {
            okk = false;
        }
    }

    return (ok or okk);
}

int main() {
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        nums.push_back(k);
    }

    cout << isMonotonic(nums) << "\n";
}
