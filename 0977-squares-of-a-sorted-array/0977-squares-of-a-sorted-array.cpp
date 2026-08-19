class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos; 
        vector<int> neg;
        vector<int> ans; 

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>0){
                nums[i] *= nums[i]; 
                pos.push_back(nums[i]); 
            }
            else{
                nums[i] *= nums[i]; 
                neg.push_back(nums[i]); 
            }
        }

        reverse(neg.begin(),neg.end()); 

        int i = 0; 
        int j = 0;
        int n1 = neg.size();
        int n2 = pos.size();

        while(i<n1 && j<n2){
            if(neg[i]>pos[j]){
                ans.push_back(pos[j]); 
                j++;
            }
            else{
                ans.push_back(neg[i]); 
                i++; 
            }
        }

        while(i<n1){
            ans.push_back(neg[i]); 
            i++;
        }
        
        while(j<n2){
            ans.push_back(pos[j]);
            j++;
        }

        return ans; 
    }
};