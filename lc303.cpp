class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
            pre.push_back(sum);
        }
    }

    int sumRange(int left, int right) {
        int res = pre[right];
        if (left - 1 >= 0) res -= pre[left - 1];
        return res;
    }

    // TC: O(n)
};
