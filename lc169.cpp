#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    map<int, int> mp;
    int x = n / 2, res;

    for (int i : nums) {
        mp[i]++;
        if (mp[i] > x) {
            res = i;
            break;
        }
    }
    return res;

    // TC: O(n logn)
    // TC: O(n), PENDING, Boyer-Moore Voting Algorithm
}

int main() {
    int n; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vec.push_back(k);
    }
    cout << majorityElement(vec) << "\n";
}
