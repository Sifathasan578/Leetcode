vector<int> findErrorNums(vector<int>& nums) {
    int n = nums.size();
    long long sumN = (n * (n + 1)) / 2;
    long long sumNSq = (n * (n + 1) * (2 * n + 1)) / 6;
    
    long long sum = 0, sumSq = 0;
    for (int num : nums) {
        sum += num;
        sumSq += (long long)num * num;
    }

    long long diff = sumN - sum;           // y - x
    long long diffSq = sumNSq - sumSq;     // y^2 - x^2

    long long sumXY = diffSq / diff;       // y + x
    
    int x = (sumXY - diff) / 2;
    int y = (sumXY + diff) / 2;

    return {x, y};
}
