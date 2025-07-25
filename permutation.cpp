class Solution {
public:

    void permutation(int index,vector<int>&nums,vector<vector<int>>&ans){
        int size = nums.size();
        if(index==size){
            ans.push_back(nums);
        }
        for(int i=index;i<size;i++){
            swap(nums[index],nums[i]);
            permutation(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(0,nums,ans);
        return ans;
    }
};