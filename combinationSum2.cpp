class Solution {
public:

    void findCandidates(int index,vector<int>& candidates,int target,vector<int>& ds,vector<vector<int>>&ans){
       int n= candidates.size();
      if (target == 0) {
            ans.push_back(ds);
            return;
        }
       for(int i=index;i<n;i++){
        if(candidates[i]>target) break;
        if(i>index && candidates[i-1]==candidates[i]) continue;
            ds.push_back(candidates[i]);
            findCandidates(i+1,candidates,target-candidates[i],ds,ans);
            ds.pop_back();
        
       }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
       vector<vector<int>> ans;
       vector<int>ds;
       findCandidates(0,candidates,target,ds,ans);
       return ans; 
    }
};