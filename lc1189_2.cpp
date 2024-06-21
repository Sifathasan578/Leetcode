#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int maxNumberOfBalloons(string text) {
    unordered_map<char, int> freq, balloon;
    for (char c : text) {
        freq[c]++;
    }
    for (char c : string("balloon")) {
        balloon[c]++;
    }

    int mn = text.size();
    for (auto &it : balloon) {
        mn = min(mn, freq[it.first] / it.second);
    }

    return mn;

    // TC: O(n)
}

int main() {
    string text; cin >> text;
    cout << maxNumberOfBalloons(text) << "\n";

    // int n; cin >> n;
    // vector<int> nums;
    // for (int i = 0; i < n; i++) {
    //     int k; cin >> k;
    //     nums.push_back(k);
    // }
    // vector<int> res = findDisappearedNumbers(nums);
    // for (int i : res) {
    //     cout << i << " ";
    // }
    // NumArray(nums);
    // int left, right; cin >> left >> right;
    // cout << sumRange(left, right) << "\n";
}
