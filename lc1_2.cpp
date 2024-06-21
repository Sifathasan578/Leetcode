#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int x = nums[i];
        int y = target - x;

        if (mp.count(y) != 0) {
            return { i, mp[y] };
        }

        mp[nums[i]] = i;
    }

    return {};
  // TC: O(n), unordered_map gives O(1)
}

int main() {
    int n; cin >> n;
    vector<int> vec1;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vec1.push_back(k);
    }
    int val; cin >> val;
    vector<int> res = twoSum(vec1, val);
    for (int i : res) {
        cout << i << " ";
    }
}
