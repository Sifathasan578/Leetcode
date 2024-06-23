#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    unordered_map<int, int> frequency;
    for (int i : students) {
        frequency[i]++;
    }

    for (int i = 0; i < sandwiches.size(); i++) {
        if (frequency[ sandwiches[i] ]) {
            frequency[sandwiches[i]]--;
        }
        else {
            return (int) (sandwiches.size() - i);
        }
    }
    return 0;
}

int main() {
    int n; cin >> n;
    vector<int> nums(n), nums2(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    cout << countStudents(nums, nums2) << "\n";
}
