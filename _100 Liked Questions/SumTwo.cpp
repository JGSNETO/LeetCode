class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int pos1 =0, pos2 =0;
        //For each nums[i] 
        for (int i = 0; i<nums.size(); i++){
            //Comparing nums[i] with each nums
            for (int j=i+1; j<nums.size();j++){
                if (nums[i]+nums[j] == target){
                    pos1 = i;
                    pos2 = j;
                }
            }
        }
    return {pos1,pos2};
    }
};