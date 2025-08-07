class Solution {
public:
    int minCuts = INT_MAX;
   bool isPalindrome(string &s, int start, int end) {
    if (palMemo[start][end] != -1)
        return palMemo[start][end];

    int i = start, j = end;
    while (i < j) {
        if (s[i] != s[j]) {
            palMemo[start][end] = 0; 
            return false;
        }
        i++; j--;
    }

    palMemo[start][end] = 1; 
    return true;
}
    void getPartition(int index,string s,vector<string>&path,vector<vector<string>>&res){
        int size = s.length();
        if(index==size){
            int cuts = path.size()-1;
            minCuts = min(cuts,minCuts);

        }
        for(int i=index;i<size;i++){
            if(isPalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                getPartition(i+1,s,path,res);
                path.pop_back();
            }
        }
    
    }
    int minCut(string s) {
       vector<vector<string>> result;
       vector<string>path;
       getPartition(0,s,path,result);
       return minCuts;

    }
};