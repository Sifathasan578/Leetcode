#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

bool isValidSudoku(vector<vector<char>>& board) {
    for (int row = 0; row < 9; row++) {
        map<char, int> mp;
        for (int col = 0; col < 9; col++) {
            if (board[row][col] >= '0' && board[row][col] <= '9') {
                mp[ board[row][col] ]++;
                if (mp[ board[row][col] ] > 1) {
                    return false;
                }
            }
        }
        mp.clear();
    }

    for (int col = 0; col < 9; col++) {
        map<char, int> mp;
        for (int row = 0; row < 9; row++) {
            if (board[row][col] >= '0' && board[row][col] <= '9') {
                mp[ board[row][col] ]++;
                if (mp[ board[row][col] ] > 1) {
                    return false;
                }
            }
        }
        mp.clear();
    }

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            map<char, int> mp;

            for (int row2 = row * 3; row2 < row * 3 + 3; row2++) {
                for (int col2 = col * 3; col2 < col * 3 + 3; col2++) {
                    if (board[row2][col2] >= '0' && board[row2][col2] <= '9') {
                        mp[ board[row2][col2] ]++;
                        if (mp[ board[row2][col2] ] > 1) {
                            return false;
                        }
                    }
                }
            }
            mp.clear();
        }
    }

    return true;
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<int> res = productExceptSelf(nums);
    for (int i : res) {
        cout << i << " ";
    }
}
