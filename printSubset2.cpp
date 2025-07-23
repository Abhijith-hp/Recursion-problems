class Solution {
public:
    void getSubsets(int index,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums){
        int n = nums.size();
        ans.push_back(ds);

        for(int i =index;i<n;i++){
            if (i>index && nums[i-1]==nums[i]) continue;
            ds.push_back(nums[i]);
            getSubsets(i+1,ds,ans,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int>ds;
        getSubsets(0,ds,ans,nums);
        return ans;

    }
};