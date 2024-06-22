#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq;

    for (int i : nums1) {
        freq[i]++;
    }

    unordered_set<int> st;
    vector<int> res;

    for (int i : nums2) {
        if (freq.find(i) != freq.end() and st.find(i) != st.end()) {
            res.push_back(i);
            st.insert(i);
        }
    }

    return res;

    // TC: O(n + m)
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> nums1(n), nums2(m);
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    vector<int> res = intersection(nums1, nums2);
    for (int i : res) {
        cout << i << " ";
    }
    cout << "\n";
}
