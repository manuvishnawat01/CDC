class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
       vector<pair<int,int>>vec;    
       vector<vector<int>>ans;
       for(auto it:intervals){
        vec.push_back({it[0],it[1]});
       }

       sort(vec.begin(),vec.end());
       int fir=vec[0].first;
       int sec=vec[0].second;

       for(int i=0;i<vec.size()-1;i++){
        if(sec>=vec[i+1].first){
            sec=max(sec,vec[i+1].second);   
        }

        else{
               vector<int>temp;
               temp.push_back(fir);
               temp.push_back(sec);

               fir=vec[i+1].first;
               sec=vec[i+1].second;
               ans.push_back(temp);
        }
       }

       ans.push_back({fir,sec});       
       return ans;
    }
};