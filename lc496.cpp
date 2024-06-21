#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    map<int, int> mp;
    int sz2 = nums2.size();

    for (int i = 0; i < sz2; i++) {
        mp[ nums2[i] ] = -1;

        for (int j = i + 1; j < sz2; j++) {
            if (nums2[j] > nums2[i]) {
                mp[ nums2[i] ] = nums2[j];
                break;
            }
        }
    }

    vector<int> res;
    for (int i = 0; i < nums1.size(); i++) {
        res.push_back(mp[ nums1[i] ]);
    }

    return res;

    // Not best solution
    // O(n^2)
    // Pending task: Follow up: Could you find an O(nums1.length + nums2.length) solution?
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
