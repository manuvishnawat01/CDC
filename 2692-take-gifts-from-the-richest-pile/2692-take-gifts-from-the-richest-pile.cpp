class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(auto g : gifts){
            pq.push(g);
        }
    
        while(k>0){
            int max = pq.top();
            pq.pop();
            int element = sqrt(max);
            pq.push(element);
            k--;
        }

        long long sum = 0;
        while(!pq.empty()){
            sum = sum + pq.top();
            pq.pop();
        }

        return sum;
    }
};