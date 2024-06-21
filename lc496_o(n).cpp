#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    map<int, int> nextGreater;
    stack<int> s;

    for (int i = nums2.size() - 1; i >= 0; i--) {
        while (s.empty() == 0 && s.top() <= nums2[i]) {
            s.pop();
        }

        if (s.empty()) {
            nextGreater[ nums2[i] ] = -1;
        }
        else {
            nextGreater[ nums2[i] ] = s.top();
        }

        s.push(nums2[i]);
    }

    vector<int> res;
    for (int num : nums1) {
        res.push_back(nextGreater[num]);
    }

    return res;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> vec1, vec2;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        vec1.push_back(k);
    }
    for (int i = 0; i < m; i++) {
        int k; cin >> k;
        vec2.push_back(k);
    }
    vector<int> res = nextGreaterElement(vec1, vec2);
    for (int i : res) {
        cout << i << " ";
    }
}
