class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left = -1;
        int right = -1; 
        int n = nums.size(); 

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(int i = 0; i<nums.size(); i++){
            maxi = max(nums[i],maxi);

            if(nums[i] < maxi){
                right = i; 
            }

            mini = min(mini,nums[n-i-1]);
            
            if(nums[n-i-1] > mini){
                left = n-i-1; 
            }
        }
        int res = right - left + 1; 
        if(left == -1 or right == -1){
            res = 0;  
        }
        return res; 
    }
};