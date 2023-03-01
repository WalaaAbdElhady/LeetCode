class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(0, nums.size() - 1, nums);
        return nums;
    }
    void merge(int l, int mid, int r, vector<int>& nums) {
        if (l >= r) return;
        int i = l, j = mid + 1, k = 0, size = r - l + 1;
        vector<int> sorted(size);
        while (i <= mid and j <= r)
            sorted[k++] = nums[i] < nums[j] ? nums[i++] : nums[j++];
        while (i <= mid)
            sorted[k++] = nums[i++];
        while (j <= r)
            sorted[k++] = nums[j++];
        for (k = 0; k < size; k++)
            nums[k + l] = sorted[k];
    }
    void mergeSort(int l, int r, vector<int>& nums) {
        if (l >= r)return;
        int md = l + (r - l) / 2;
        mergeSort(l, md, nums);
        mergeSort(md + 1, r, nums);
        merge(l, md, r, nums);
    }
};