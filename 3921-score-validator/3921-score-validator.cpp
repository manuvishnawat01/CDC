class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n = events.size();
        vector<int>ans(2);
        int score=0,counter=0;
        for(int i=0; i<n; i++)
            {
                if(counter>=10)
                    break;
                if(events[i]=="0" || events[i]=="1" || events[i]=="2" || events[i]=="3" || events[i]=="4" || events[i]=="5" || events[i]=="6")
                {
                    int temp = stoi(events[i]);
                    score += temp;
                }

                else if(events[i]=="W")
                    counter++;
                    
                else if(events[i]=="WD")
                        score++;
                else if(events[i]=="NB")
                        score++;
                
            }
        ans[0] = score;
        ans[1] = counter;
        return ans;
    }
};