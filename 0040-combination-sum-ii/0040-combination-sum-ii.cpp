class Solution {
public:
    void sum(int inx,vector<int>&a,int target,int n,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=inx;i<n;i++){
            if(i>inx && a[i]==a[i-1]){continue;}
            if(a[i]>target){break;}
            ds.push_back(a[i]);
            sum(i+1,a,target-a[i],n,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int target) {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        vector<int>ds;
        sum(0,a,target,n,ans,ds);
        return ans;
    }
};