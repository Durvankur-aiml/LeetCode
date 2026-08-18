class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a; 
        vector<int> b;
        vector<int> ans;  

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                nums[i] *= nums[i]; 
                b.push_back(nums[i]);
            }
            else{
                nums[i] *= nums[i]; 
                a.push_back(nums[i]); 
            }
        }
        
        reverse(a.begin(), a.end());

        int i = 0; 
        int j = 0; 

        while(i < a.size() && j < b.size()){
            if(a[i] < b[j]){
                ans.push_back(a[i]);
                i++; 
            }
            else{
                ans.push_back(b[j]); 
                j++;
            }
        }

        while(i < a.size()){
            ans.push_back(a[i]);
            i++; 
        }

        while(j < b.size()){
            ans.push_back(b[j]); 
            j++; 
        }

        return ans; 
    }
};