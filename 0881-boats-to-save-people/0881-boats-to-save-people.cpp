class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end()); 
        int left = 0;
        int right = people.size() - 1; 

        int cs = 0;        
        int boats = 0; 

        while(left<=right){
            cs = people[left] + people[right];

            if(cs<=limit){
                boats++;
                left++;
                right--;
            }

            else{
                if(people[right]<=limit){
                    boats++;
                }
                right--; 
            }
        }
        return boats; 
    }
};