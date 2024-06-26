#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int longestConsecutive(vector<int>& nums) {
    // Hash set creation, O(n)
    unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;

    for (auto &it : s) {
        // If this is the first element in the sequence
        if (s.count(it - 1) == 0) {
            int length = 1;
            while (s.count(it + length)) {
                length++;
            }
            longest = max(longest, length);
        }
    }
    return longest;

    // TC: O(n)
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
