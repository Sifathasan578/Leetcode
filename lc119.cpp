#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

vector<int> getRow(int rowIndex) {
    vector<vector<int>> res(rowIndex + 1);

    if (rowIndex == 0) {
        res[0].push_back(1);
    }
    else if (rowIndex >= 1) {
        res[0].push_back(1);
        res[1].push_back(1);
        res[1].push_back(1);
    }
    for (int i = 2; i <= rowIndex; i++) {
        res[i].push_back(1);
        for (int j = 1; j < i; j++) {
            res[i].push_back(res[i - 1][j - 1] + res[i - 1][j]);
        }
        res[i].push_back(1);
    }
    return res[rowIndex];

  // TC: O(n ^ 2), Need to decrease complexity
  // Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?
}

int main() {
    int n; cin >> n;
    vector<int> res = getRow(n);
    for (int i : res) {
        cout << i << " ";
    }
}
