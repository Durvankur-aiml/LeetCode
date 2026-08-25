class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0; 
        int n = nums.size(); 
        int res = INT_MAX; 

        int sum = 0; 

        while(high<nums.size()){
            sum += nums[high]; 
            while(sum>=target){
                int len = high - low + 1; 
                res = min(len,res); 

                sum -= nums[low]; 
                low++; 
            }
            high++; 
        }
        if(res == INT_MAX){
            res = 0; 
        }
        return res; 
    }
};