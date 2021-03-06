double find_kth_small(vector<int> a, vector<int> b, int k) {
    int m = a.size();
    int n = b.size();
    if (m > n) return find_kth_small(b, a, k);
    if (m == 0) return b[k - 1];
    if (k == 1) return min(a[0], b[0]);
    int i = min(m, k/2);
    int j = min(n, k/2);
    if (a[i - 1] < b[j - 1]) return find_kth_small(vector<int> (a.begin() + i, a.end()), b, k - i);
    else return find_kth_small(a, vector<int> (b.begin() + j, b.end()), k - j);
    return 0;
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total = nums1.size() + nums2.size();
        return (find_kth_small(nums1, nums2, (total + 1) / 2) + find_kth_small(nums1, nums2, (total + 2) /2) ) / 2.0;       
    }
};
