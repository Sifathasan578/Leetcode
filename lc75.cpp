#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

void sortColors(vector<int>& nums) {
    int freq[3] = {0};
    for (int i : nums) {
        freq[i]++;
    }

    for (int i = 0, j = 0; i < 3; i++) {
        while (freq[i]) {
            nums[j] = i;
            j++;
            freq[i]--;
        }
    }
    
    // TC: O(n)
    // TD: Dutch National Flag Algorithm by Edsger W
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sortColors(nums);
}
