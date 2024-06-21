#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i : nums) {
        mp[i]++;
    }

    vector<int> res;
    for (int i = 1; i <= n; i++) {
        if (mp.find(i) == mp.end()) {
            res.push_back(i);
        }
    }

    return res;

    // TC: O(n)
}

int main() {
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        nums.push_back(k);
    }
    vector<int> res = findDisappearedNumbers(nums);
    for (int i : res) {
        cout << i << " ";
    }
}
