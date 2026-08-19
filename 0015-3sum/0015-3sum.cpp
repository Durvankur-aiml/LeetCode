class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans; 
        int i = 0;  
        sort(nums.begin(),nums.end()); 

        for(int i = 0; i<nums.size() - 2; i++){
            int left = i+1; 
            int right = nums.size() - 1; 
            int sum = -1 * nums[i]; 

            if( i != 0 && nums[i] == nums[i-1]){
                continue; 
            }

            while(left < right){

                if(nums[left] + nums[right] == sum){
                    ans.push_back({nums[left],nums[right],nums[i]});  

                    left++; 
                    right--; 
                    while(left<right && nums[right] == nums[right+1]){
                        right--;
                    }

                    while(left<right && nums[left] == nums[left-1]){
                        left++; 
                    }
                }

                else if(nums[right] + nums[left] > sum){
                    right--;
                }

                else{
                    left++; 
                }
            }

        }
        return ans; 
    }
};