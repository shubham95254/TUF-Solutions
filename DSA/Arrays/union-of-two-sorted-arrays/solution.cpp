class Solution {
   public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> combinedArr;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                if (combinedArr.empty() || nums2[j] != combinedArr.back()) 
                combinedArr.push_back(nums1[i]);
                i++;
                j++;
            } else if (nums1[i] > nums2[j]) {
                if (combinedArr.empty() || nums2[j] != combinedArr.back()) {
                    combinedArr.push_back(nums2[j]);
                }
                j++;
            } else {
                if (combinedArr.empty() || nums1[i] != combinedArr.back()) {
                    combinedArr.push_back(nums1[i]);
                }
                i++;
            }
        }
        while (i < nums1.size()) {
            if (combinedArr.empty() || nums1[i] != combinedArr.back()) combinedArr.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size()) {
            if (combinedArr.empty() || nums2[j] != combinedArr.back()) combinedArr.push_back(nums2[j]);
            j++;
        }
        return combinedArr;
    }
};