class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int i = 0; 
    int j = 1; 
    int n = nums.size(); 
    while(j<n){
        if(nums[j] == nums[i]){
            j++; 
        }
        else if(nums[j] != nums[j-1]){
            nums[i+1] = nums[j]; 
            i++; 
            j++; 
        }
    }
    return i+1; 
    }
};