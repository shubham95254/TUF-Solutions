class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int l1=INT_MIN, l2=INT_MIN;
        for(auto it:nums) {
            if(it>l1) {
                l2=l1;
                l1=it;
            } else if (it<l1 && it > l2){
                l2 = it;
            } 
        }
        if(l2==INT_MIN) return -1;
        return l2;
      
    }
};