class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        move(begin(nums2), end(nums2), back_inserter(nums1));
        sort(begin(nums1), end(nums1));
        double result;
        int arrSize = nums1.size();
        
        if (arrSize % 2 != 0) result = nums1[arrSize / 2];
        else result = (nums1[(arrSize - 1) / 2] + nums1[arrSize / 2]) / 2.0;
 
        return result;
    }
};
