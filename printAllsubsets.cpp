class Solution {
public:
    void getSubsets(int index,vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums){
        int n = nums.size();
        if(index==n){
            ans.push_back(ds);
            return;
        }
            

        ds.push_back(nums[index]);
        getSubsets(index+1,ds,ans,nums);
        ds.pop_back();
        getSubsets(index+1,ds,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> ans;
       vector<int>ds;
       getSubsets(0,ds,ans,nums);
       return ans; 
    }
};