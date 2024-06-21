#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int numIdenticalPairs(vector<int>& nums) {
    int res = 0, n = nums.size();
    unordered_map<int, int> mp;

    for(int i: nums) {
        mp[i]++;
    }

    for(auto &it: mp) {
        int x = it.second;
        res += (x * (x - 1)) / 2;
    }

    return res;
}

int main() {
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        nums.push_back(k);
    }

    cout << numIdenticalPairs(nums) << "\n";
}
