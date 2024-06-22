#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(n + 1, 0);

    int x, y;
    for (int i : nums) {
        freq[i]++;
    }

    for (int i = 1; i <= n; i++) {
        if (freq[i] == 2) x = i;
        if (freq[i] == 0) y = i;
    }

    return {x, y};

    // TC: O(n)
}

int main() {
    int n; cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        nums.push_back(k);
    }
    vector<int> res = findErrorNums(nums);
    for (int i : res) cout << i << " ";
    cout << "\n";
}
