class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> cn = nums; 
        sort(cn.begin(),cn.end());

        int left = 0;
        int right = nums.size()-1;

        while(left < nums.size() and cn[left] == nums[left]){
            left++; 
        }

        if(left == nums.size()){
            return 0; 
        }

        while(cn[right] == nums[right]){
            right--;
        }

        return right - left + 1; 
    }
};