class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n= nums.size();
        vector<int>result;
        int i;
        for(i=0;i<n;i++){
            result.push_back(nums[nums[i]]);
        }
        return result;
    }
};