class Solution {
public:
    int earliestFinishTime(vector<int>& landOpen, vector<int>& landTime,
                           vector<int>& waterOpen, vector<int>& waterTime) {
        int landThenWater = getMinFinish(landOpen, landTime, waterOpen, waterTime);
        int waterThenLand = getMinFinish(waterOpen, waterTime, landOpen, landTime);
        return min(landThenWater, waterThenLand);
    }

private:
    int getMinFinish(vector<int>& firstOpen, vector<int>& firstTime,
                     vector<int>& secondOpen, vector<int>& secondTime) {
        int firstDone = INT_MAX;
        for (int i = 0; i < firstOpen.size(); ++i) {
            firstDone = min(firstDone, firstOpen[i] + firstTime[i]);
        }

        int answer = INT_MAX;
        for (int i = 0; i < secondOpen.size(); ++i) {
            int secondStart = max(firstDone, secondOpen[i]);
            answer = min(answer, secondStart + secondTime[i]);
        }

        return answer;
    }
};