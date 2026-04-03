class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            int size = res.size()-1;
            vector<int> curr = res[size];
            res.pop_back();
            vector<int> curr2 = intervals[i];
            if(curr[1] >=curr2[0]){
                int sec = max(curr[1],curr2[1]);
                cout<<sec<<endl;
                res.push_back({curr[0],sec});
            }else{
                res.push_back(curr);
                res.push_back(curr2);
            }
        }
        return res;
    }
};