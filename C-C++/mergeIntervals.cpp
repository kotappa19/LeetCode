class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        for(int i = 0; i < intervals.size(); i++) {
            if(res.empty() || res[res.size()-1][1] < intervals[i][0]) {
                res.push_back(intervals[i]);
            } else {
                res[res.size()-1][1] = max(res[res.size()-1][1], intervals[i][1]);
            }
        }
        return res;
    }
};
