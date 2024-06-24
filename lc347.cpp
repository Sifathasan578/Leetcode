#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int i : nums) {
        freq[i]++;
    }

    // Convert map to vector of pairs
    vector<pair<int, int>> vec(freq.begin(), freq.end());

    sort(vec.begin(), vec.end(), [](const pair<int, int> a, const pair<int, int> b) {
        return a.second > b.second;
    });

    vector<int> res;
    for (int i = 0; i < vec.size() and k; i++, k--) {
        res.push_back(vec[i].first);
    }

    return res;

    // TC: O(nlogn)
    // Follow up: Better than O(nlogn)
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    vector<int> res = topKFrequent(nums, k);
    for (int i : res) {
        cout << i << " ";
    }
    cout << "\n";
}
