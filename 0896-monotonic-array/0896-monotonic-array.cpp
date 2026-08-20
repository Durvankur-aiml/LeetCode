class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool X = true;
        bool Y = true;  
        int n = nums.size(); 

        for(int i = 0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                X = false; 
                break; 
            }
        }

        for(int i = n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                Y = false;
                break; 
            }
        }

        if(X == true or Y == true){
            return true;
        }
        else return false; 
    }
};