class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1; 
        for(int x = 0; x<nums.size(); x++){
            if(nums[x] == 0){
                j = x; 
                break; 
            }
        }

            if(j == -1){
                return; 
            }

            for(int i = j+1; i<nums.size(); i++){
                if(nums[i] != 0){
                    swap(nums[j],nums[i]);
                    j++;  
                }
            }
        }
};