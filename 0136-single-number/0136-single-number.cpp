class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int X = 0; 
        for(int i = 0; i<nums.size(); i++){
            X = X ^ nums[i]; 
        }
        return X;
    }
};